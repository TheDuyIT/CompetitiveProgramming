arr = [5**i for i in range(1, 13)]
def fff(n):
    s = 0
    for val in arr:
        s += n//val
    return s
n=int(input())
print(fff(n))
