def solve():
    w, b = input().split(' ')
    w = int(w)
    b = int(b)
    pattern = 'wbwbwwbwbwbw'
    pattern *= max(w, b)
    target = 'w' * w + 'b' * b
    if target in pattern:
        print('Yes')
    else:
        print('No')

solve()
