// https://leetcode.com/problems/squares-of-a-sorted-array/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int curr_idx = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            curr_idx = i;
            if (nums[i] >= 0)
                break;
        }
        int point_1 = curr_idx - 1;
        int point_2 = curr_idx;
        vector<int> rest(nums.size());
        curr_idx = 0;
        for (int i = point_1, j = point_2; i >= 0 || j < nums.size();)
        {
            
            if (i == j)
            {
                rest[curr_idx] = nums[i] *nums[i];
                --i;
                ++j;
                ++curr_idx;
                continue;
            }
            if (i < 0){
                rest[curr_idx] = nums[j] * nums[j];
                j++;
                ++curr_idx;
                continue;
            }
            if (j >= nums.size()){
                rest[curr_idx] = nums[i]  * nums[i];
                --i;
                ++curr_idx;
                continue;
            }
            int i2 = nums[i] * nums[i], j2 = nums[j] * nums[j];
            if (i2 < j2)
            {
                rest[curr_idx] = i2;
                i--;
            }
            else if (i2 > j2)
            {
                rest[curr_idx] = j2;
                ++j;
            }
            else
            {
                rest[curr_idx] = j2;
                ++curr_idx;
                rest[curr_idx] = j2;
                
                --i;
                ++j;
            }
            ++curr_idx;
        }
        return rest;
    }
};

int main()
{
    Solution sol = Solution();
    // vector<int> nums{-7, -3, 2, 3, 11};
    // vector<int> nums{-7, -3, -2, -1};
    vector<int> nums{-1, 2, 2};
    auto rest = sol.sortedSquares(nums);
    for (auto num : rest)
    {
        cout << num << " ";
    }
}