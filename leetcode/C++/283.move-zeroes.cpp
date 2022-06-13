// https://leetcode.com/problems/move-zeroes/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void swap(int &a, int &b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    void moveZeroes(vector<int> &nums)
    {
        int idx = 0, tmp = 0;
        for (; idx < nums.size(); ++idx)
        {
            if (nums[idx])
            {
                nums[tmp++] = nums[idx];
            }
        }
        for (; tmp < nums.size(); ++tmp)
        {
            nums[tmp] = 0;
        }
    }
};

int main()
{
    vector<int> nums{1, 0, 1};
    Solution sol = Solution();

    sol.moveZeroes(nums);
    for (auto num : nums)
    {
        cout << num << " ";
    }
}