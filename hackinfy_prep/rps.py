n = int(input())
poi = int(input())
f = list(input())

f.insert(poi, 'X')


def decwin(i, j):
	if (i == 'P' and j == 'R') or (i == 'R' and j == 'S') or (i == 'S' and j == 'P'):
		return 0
	return 1

