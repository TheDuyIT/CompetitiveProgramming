# constructive_algorithms|strings|1100
# https://codeforces.com/contest/1729/problem/B

q = int(input())

while q:
    s = input()
    s = [ord(i) - 96 for i in s]
    n = len(s)
    m = 0
    t = ""

    a, b = s[0], s[-1]

    direction = 1 if a < b else -1
    for i in range(a, b + direction, direction):
        for j in range(n):
            if s[j] == i:
                m += 1
                t += str(j + 1) + " "
    print(abs(a - b), m)
    print(t)
    q -= 1
