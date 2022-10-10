# math|800
# https://codeforces.com/contest/1729/problem/A
t = int(input())
while t:
    a, b, c = map(int, input().split())

    d_1 = a - 1
    d_2 = abs(b - c) + c - 1
    if d_1 == d_2:
        print(3)
    elif d_1 < d_2:
        print(1)
    else:
        print(2)
    t -= 1
