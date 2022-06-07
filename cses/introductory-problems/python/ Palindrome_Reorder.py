seq = input()
dic = {}

for lt in seq:
    if dic.get(lt, 0):
        dic[lt] += 1
    else:
        dic[lt] = 1
cnt_odd = 0
for key, val in dic.items():
    if val % 2:
        cnt_odd += 1
if cnt_odd > 1:
    print("NO SOLUTION")
else:
    res = ''
    odd_key = None
    for key, val in dic.items():
        if not val % 2:
            res += key * (val//2)
        else:
            odd_key = (key, val)
    if odd_key:
        print(res + odd_key[0] * odd_key[1] + res[::-1]) 
    else:
        print(res + res[::-1]) 