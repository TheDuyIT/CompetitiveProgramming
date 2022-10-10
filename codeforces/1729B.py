# greedy|string|800
# https://codeforces.com/contest/1729/problem/B

t = int(input())

while t:
    n = int(input()) - 1
    s = input()

    res = []
    while n >= 0:
        if s[n] == '0':
            res.append(s[n - 2: n])
            n -= 3
        else:
            res.append(s[n: n + 1])
            n -= 1
    res = [chr(int(i) + 96) for i in res][::-1]
    res = ''.join(res)
    print(res)
    t -= 1
