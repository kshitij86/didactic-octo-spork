ls = []

def suffixSort(str):
    if str == "":
        return
    suffixSort(str[1:])
    ls.append(str)

str, k = input().split()
k = int(k)
suffixSort(str)
print(sorted(ls)[k-1])
