n = int(input())
def f(k):
    kk = k**2
    return (kk * (kk - 1))//2  - 4*(k - 1) * (k - 2)
for k in range(1, n + 1):
    print(f(k))