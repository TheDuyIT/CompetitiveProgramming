import itertools
arr = input()
res = list(itertools.permutations(arr))
res = sorted(set(res))
print(len(res))
for r in res:
    print(''.join(r))
