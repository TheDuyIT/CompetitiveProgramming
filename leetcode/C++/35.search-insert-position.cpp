// https://leetcode.com/problems/search-insert-position/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int mid, left = 0, right = nums.size() - 1;
        while (left <= right)
        {
            mid = left + (right - left) / 2;
            if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return left;
    }
};

int main()
{
    Solution sol = Solution();
    vector<int> nums{1, 3, 5, 6};
    int rest = sol.searchInsert(nums, 0);
    cout << rest << "\n";
}