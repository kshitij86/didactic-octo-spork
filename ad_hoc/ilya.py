i = input()
if int(i) > 0:
	print(i)
else:
	g = str(i)
	if int(g[-1]) < int(g[-2]):
		print(g[0:-1])
	elif int(g[-1]) < int(g[-2]):
		print(g[-3] + g[-2])

			
