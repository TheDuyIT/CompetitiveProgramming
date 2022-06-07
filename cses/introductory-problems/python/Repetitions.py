seq = input()
res = 1
tmp = 1
for i in range(1, len(seq)):
    lt, p_lt = seq[i], seq[i - 1]
    if lt == p_lt:
        tmp += 1
        res = max(res, tmp)
        continue
    tmp = 1
print(res)

    