// https://leetcode.com/problems/binary-search/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int idx, left = 0, right = nums.size() - 1;
        while (left <= right)
        {
            idx = (left + right) / 2;
            if (nums[idx] == target)
            {
                return idx;
            }
            if (target < nums[idx])
                right = idx - 1;
            else
                left = idx + 1;
        }

        return -1;
    }
};

int main()
{
    vector<int> nums{-1};
    Solution sol = Solution();
    int idx = sol.search(nums, 30);
    std::cout << "idx: " << idx << "\n";
}



