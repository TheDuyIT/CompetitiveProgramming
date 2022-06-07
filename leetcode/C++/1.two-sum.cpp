// https://leetcode.com/problems/two-sum/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> stg_map;

        for (int i = 0;; ++i)
        {
            auto it = stg_map.find(target - nums[i]);
            if (it != stg_map.end())
            {
                return vector<int>{i, it->second};
            }

            stg_map[nums[i]] = i;
        }
    }
};

int main(){
    vector<int> nums{2, 7, 11, 15};
    Solution sol = Solution();
    auto res = sol.twoSum(nums, 26);
    cout << res[0] << " " << res[1] << "\n";
}