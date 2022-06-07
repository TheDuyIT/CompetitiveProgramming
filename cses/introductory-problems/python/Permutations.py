n = int(input())

if n < 4 and n > 1:
    print("NO SOLUTION")
else:
    n += 1
    for i in range(2, n, 2):
        print(i, end = ' ')
    for i in range(1, n, 2):
        print(i, end = ' ')
    
