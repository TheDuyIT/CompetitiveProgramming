n = int(input())

while n:
    y, x = map(int, input().split())
    if y > x:
        if y % 2:
            print((y - 1)**2 + x)
        else:
            print(y**2 - x + 1)
    else:
        if x % 2:
            print(x**2 - y + 1)
        else:
            print((x - 1)**2 + y)
    n -= 1