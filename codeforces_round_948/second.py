t = int(input().strip())
for _ in range(t):
    x = int(input().strip())
    a = []
    i = 0
    while x:
        if x & 1:
            if ((x >> 1) & 1):
                a.append(-1)
                x += 2
            else:
                a.append(1)
        else:
            a.append(0)
        x >>= 1
    print(len(a))
    print(*a)