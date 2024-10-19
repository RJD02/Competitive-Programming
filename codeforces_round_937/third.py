def solve():
    s = input().split(':')
    hour = int(s[0])
    real_hour = hour % 12
    if real_hour == 0:
        print(':'.join([str(12), s[1]]), 'AM')
    if real_hour == hour:
        print(':'.join(s), 'AM')
    elif real_hour < hour:
        print(':'.join([str(real_hour), s[1]]), 'PM')


def main():
    t = int(input())
    while t:
        solve()
        t -= 1

main()


