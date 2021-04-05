t = int(input())

while t:
    n, k = list(map(int, input().split()))
    s = input()
    ab = "*" * k
    if s.find(ab) != -1:
        print("yes")
    else:
        print("no")
    t -= 1
