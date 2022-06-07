def f(n):
    if n == 0:
        return ['0']
    if n == 1:
        return ['0', '1']
    fn_pre = f(n - 1)
    res = ['0' + r for r in fn_pre] + ['1' + r for r in fn_pre[::-1]]
    return res

n = int(input())
print('\n'.join(f(n)))