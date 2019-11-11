#D1: UO Off by One
line = input().split(" ")
n = int(line[0])
k = int(line[1])

nums = list()
indices = [-1 for i in range(k)]

for i in range(n):
    new = int(input())
    if new not in nums:
        nums.append(new)
        indices[new - 1] = i
    else:
        index = indices[new - 1]
        if index < len(nums) - 2:
            if nums[index + 1] < new:
                for j in range(index, len(nums)-1):
                    nums[j] = nums[j+1]
                nums[len(nums)-1] = new
                indices[new - 1] = i
print(*nums)
