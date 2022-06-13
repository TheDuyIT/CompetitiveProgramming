// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
// https://leetcode.com/problems/first-bad-version/

#include <bits/stdc++.h>
using namespace std;

bool isBadVersion(int n){
    return true;
}
class Solution
{
public:
    int firstBadVersion(int n)
    {
        int mid, left = 1, right = n;
        while (left < right)
        {
            mid = left + (right - left) / 2;
            if (isBadVersion(mid))
                right = mid;
            else
                left = mid + 1;
        }
        return left;
    }
};

int main()
{
    Solution sol = Solution();
    int idx = sol.firstBadVersion(0);
    std::cout << "idx: " << idx << "\n";
}