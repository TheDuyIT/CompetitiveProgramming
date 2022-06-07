arr = [0 for i in range(20**5 + 1)]
input()
numbers  = map(int, input().split())
for num in numbers:
    arr[num] = 1
for idx, num in enumerate(arr[1:]):
    if num == 1:
        continue
    print(idx + 1)
    break