number = int(input())
print(number, end = ' ')
while number != 1:
    number = number * 3 + 1 if number % 2 else number // 2
    print(number, end = ' ')