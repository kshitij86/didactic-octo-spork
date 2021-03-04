fi = open("/home/akane86/Desktop/job/cp/sample/input.txt", "r")
fo = open("/home/akane86/Desktop/job/cp/sample/output.txt", "w")

n = int(fi.readline())
while fi.readline():
    st = ""
    while n > 0:
        ctr = 0
        cr = str(fi.readline())
        for _ in st:
            if _ < cr:
                ctr += 1
        fo.write(str(ctr) + "\n")
        st += cr
        n -= 1
