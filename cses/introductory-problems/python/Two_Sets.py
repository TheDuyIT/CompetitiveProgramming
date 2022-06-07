n = int(input())
arr = [0 for i in range(n + 1)]

s = n*(n + 1)//2

if s % 2:
    print('NO')
else:
    cnt = 0
    print('YES')
    s //= 2

    idx = n + 1

    for i in range(n, 0, -1):
        if s >= i:
            s -= i
            arr[i] = 1
            cnt += 1
        if not s:
            break
    # print(arr)
    print(cnt)
    for i, val in enumerate(arr):
        if val == 1:
            print(i, end = ' ')
    print('\n' + str(n - cnt))
    for i, val in enumerate(arr):
        if not i:
            continue
        if val == 0:
            print(i, end = ' ')
    