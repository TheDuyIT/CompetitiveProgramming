def f(n, s, d, i):
    if n == 1:
        print(s, d)
        return
    f(n - 1, s, i, d)
    f(1, s, d, i)
    f(n - 1, i, d, s)


n = int(input())
print(2**n - 1)
f(n, '1', '3', '2')