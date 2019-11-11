#D1: UO Off by One
s = input().split(" ")
a = int(s[0])
b = int(s[1])
steps = 0
while a != b:
    if (a > b):
        if a % 2 == 0:
            a = a // 2
            steps += 1
        else:
            a = (a + 1) // 2
            steps += 2
    else:
        steps += b-a
        a = b
print(steps)
"""
steps = {}
def solve(x,B):
    if x in steps:
        return steps[x]
    if x < B:
        steps[x] = B - x
        return steps[x]
    if x == B:
        return 0
    if x > 4*B:
        steps[x] = 1+ (x % 2) + solve((x+ (x%2))/2, B)
        return steps[x]
    if x > B:
        if x == 2*B:
            steps[x] = 1
            return 1
        if x % 2 == 0:
            m = 1 + solve(x / 2, B)
            steps[x] = min(m, 1+solve(x+1,B))
            return steps[x]
        steps[x] = 1 + solve(x+1, B)
        return steps[x]
print(solve(10**9, 3))
"""
