T = int(input())

while T > 0:
    n, e, h, a, b, c = list(map(int, input().split()))
    p = 1e24

    # single dishes poss
    if e >= (2*n):
        p = min(p, n*a)
    if h >= (3*n):
        p = min(p, n*b)
    if e >= n and h >= n:
        p = min(p, n*c)

    # double dishes poss
    if (e//2 >= 1) and (e//2 >= (3*n - h + 2)/3):
        if a < b:
            temp = min(n-1, e//2)
            p = min(p, temp*(a-b) + (n*b))
        else:
            temp = max(1, ((3*n - h + 2)/3))
            p = min(p, temp*(b-c) + (n*c))
    if ((h-n)//2 == 1) and ((h-n)//2 >= (n-e)):
        if b < c:
            temp = min(n-1, (h-n)//2)
            p = min(p, temp*(b-c) + (n*c))
        else:
            temp = max(1, (n-e))
            p = min(p, temp*(b-c) + (n*c))
    if (e-n >= 1) and (e+h) > (2*n):
        if a < c:
            temp = min(n-1, e-n)
            p = min(p, temp*(a-c) + (n*c))
        else:
            temp = max(1, n-h)
            p = min(p, temp*(a-c) + n*c)
    # triple dishes poss
    if n >= 3 and e >= 3 and h >= 4:
        p = min(p, (a+b+c))

    T -= 1
