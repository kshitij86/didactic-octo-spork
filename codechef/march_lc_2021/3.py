from math import log2

t = int(input())

while t > 0:
    c = int(input())
    bin_c = bin(c)[2:]
    str_2d = "1" + ("0"*len(bin_c))
    d = int(str_2d, 2)
    # print(next_power_of_2)
    d = int(log2(d))
    b = int("0" + ("1" * (d-1)), 2)
    print(b * (b ^ c))
    t -= 1


# works but TLE
# while t > 0:
#     c = int(input())
#     bin_c = bin(c)[2:]
#     str_2d = "1" + ("0"*len(bin_c))
#     next_power_of_2 = int(str_2d, 2)
#     # print(next_power_of_2)
#     max_prod = 0
#     for a in range(next_power_of_2-1, 1, -1):
#         max_prod = max(max_prod, a*(a ^ c))
#     print(max_prod)
#     t -= 1
