f = open('/home/akane86/Desktop/k/cp/advent_of_fucking_code/aoc_2_input.txt')
valid_passws = 0


while True:
    line = str(f.readline())
    # print(line)
    if not line:
        break

    rn, ch, passw = list(line.split(" "))
    ch = ch[:len(ch)-1]
    rn = str(rn)
    smol, bigg = rn.split("-")
    smol = int(smol)
    bigg = int(bigg)

    if passw.count(ch) <= bigg and passw.count(ch) >= smol:
        valid_passws += 1

print(valid_passws)
