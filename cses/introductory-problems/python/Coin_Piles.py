def f(a, b):
    if a < b:
        a, b = b, a
    if a > 2*b:
        return 'NO'
    if (a+b)%3 == 0:
        return 'YES'
    # a %= 3
    # b %= 3

    # if a < b:
    #     a, b = b, a
    # if (a == 2 and b == 1) or (a == b and b == 0):
    #     return 'YES'
    return 'NO'

n = int(input())
while n:
    a, b = map(int, input().split())
    print(f(a, b))
    n-=1


