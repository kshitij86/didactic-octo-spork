x = [1, 11, 111, 1111,
  	2, 22, 222, 2222,
  	3, 33, 333, 3333,
  	4, 44, 444, 4444,
  	5, 55, 555, 5555,
  	6, 66, 666, 6666,
  	7, 77, 777, 7777,
  	8, 88, 888, 8888,
  	9, 99, 999, 9999]

t = int(input())

for i in range(t):
	res = 0
	n = int(input())
	for c in x:
		if c == n:
			res += len(str(c))
			break
		res += len(str(c))
	print(res)