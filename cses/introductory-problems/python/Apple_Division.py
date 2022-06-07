n = int(input())
arr = sorted(map(int, input().split()), reverse=True)
res = 99999999999999999999
for i in range(1, 2 ** len(arr)):

    l1, l2 = 0, 0
    bits = bin(i)[2:]
    
    for idx in range(1, len(arr) + 1):
        val = 1
        if idx > len(bits):
            val = 0
        else:
            val = 1 if bits[idx - 1] == '1' else 0
        if val == 1:
            l1 += arr[idx - 1]
        else:
            l2 += arr[idx - 1]
    res = min(res, abs(l1 -l2))

print(res)