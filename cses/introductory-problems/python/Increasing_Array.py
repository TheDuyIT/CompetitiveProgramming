input()
nums = list(map(int, input().split()))

res = 0
max_n = nums[0]
for num in nums[1:]:
    if num < max_n:
        res += (max_n - num)
    max_n = max(num, max_n)
print(res) 