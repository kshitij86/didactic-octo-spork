# https://prepinsta.com/hackwithinfy/coding/

T = int(input())

for _ in range(T):
    N = int(input())
    A = list(map(int, input().split()))
    dhash = {}

    for i in range(len(A)):
        if A[i] not in dhash.keys():
            dhash[A[i]] = [i]
        else:
            # Non consecutive indices
            if dhash[A[i]][-1] - i != -1:
                dhash[A[i]].append(i)

    pickDish = 0
    umax = -1
    for k, v in dhash.items():
        if umax < len(v):
            umax = max(umax, len(v))
            pickDish = k
    print(pickDish)
