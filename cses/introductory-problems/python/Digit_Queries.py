import math
def f(k):
    i = 1
    l = 0

    while l + i * 9 * pow(10, i-1) < k:
        l += i * 9 * pow(10, i-1)
        i += 1
    k -= l

    n = pow(10, i-1)
    
    str_len = i
    n = int(n + k // str_len)
    k = math.floor(k % str_len) - 1
    if k < 0:
        n -= 1
    s = str(n)
    print(s[k])

n = int(input())

while n:
    f(int(input()))
    n-=1