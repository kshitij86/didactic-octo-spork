n = int(input())
x = list(map(int, input().split()))
k = int(input())

d = {}

x = sorted(x)

for i in x:
	if i in d.keys():
		d[i] += 1
	else:
		d[i] = 1


for a, b in d.items():
	if b == k:
		print(a)
		break
		
