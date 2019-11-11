#D1: UO Off by One
n = int(input())
W = []
for i in range(n):
	W.append(input())

swp = [[sum([W[i][k] != W[j][k] for k in range(len(W[0]))]) == 2 for j in range(n)] for i in range(n)]
l = [False for i in range(n)]

for s in swp:
    print([int(k) for k in s])
		
