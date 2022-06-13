// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int l = 0, r = numbers.size() - 1, s;
        while (l < r)
        {
            s = numbers[l] + numbers[r];
            if (s == target)
                return vector<int>{l + 1, r + 1};
            if (s < target)
                ++l;
            else
                --r;
        }
        return vector<int>{-1, -1};
    }
};

class SolutionBinary
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int l = 0, r = numbers.size() - 1, s;
        while (l < r)
        {
            s = target - numbers[l];
            int left = l + 1, right = numbers.size() - 1, mid;
            while (left <= right)
            {
                mid = left + (right - left) / 2;
                if (numbers[mid] == s)
                {
                    return vector<int>{l + 1, mid + 1};
                }
                if (numbers[mid] < s)
                    left = mid + 1;
                else
                    right = mid - 1;
            }

            ++l;
        }
        return vector<int>{-1, -1};
    }
};

int main()
{
    vector<int> nums{2, 7, 11, 15};
    int target = 26;
    SolutionBinary sol = SolutionBinary();
    auto res = sol.twoSum(nums, target);
    cout << res[0] << " " << res[1];
}