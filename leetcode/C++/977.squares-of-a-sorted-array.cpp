// https://leetcode.com/problems/squares-of-a-sorted-array/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int curr_idx = nums.size() - 1, left = 0, right = nums.size() - 1;
        vector<int> rest(nums.size());

        while (left <= right)
        {
            int left2 = nums[left] * nums[left];
            int right2 = nums[right] * nums[right];
            if (left2 < right2){
                rest[curr_idx--] = right2;
                --right;
            }
            else{
                rest[curr_idx--] = left2;
                ++left;
            }
        }
        return rest;
    }
};

int main()
{
    Solution sol = Solution();
    vector<int> nums{-7, -3, 2, 3, 11};
    // vector<int> nums{-7, -3, -2, -1};
    // vector<int> nums{-1, 2, 2};
    auto rest = sol.sortedSquares(nums);
    for (auto num : rest)
    {
        cout << num << " ";
    }
}