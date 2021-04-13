t = int(input())

n, m, k = list(map(int, input().split()))

g = [[0]*m]

for i in range(n):
	l = [0] + list(map(int, input().split()))
	g.append(l)

for i in range(1, m+1):
	for j in range(1, n+1):	
		g[i][j] += g[i][j-1]

for i in range(1, m):
	for j in range(1, n):	
		g[j][i] += g[j-1][i]


print(g)
