#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int left = 0, right = s.size() - 1;
        while (left < right)
        {
            swap(s[left++], s[right--]);
        }
    }
};

int main()
{

    vector<char> s{'h', 'e', 'l', 'l', 'o'};
    Solution sol = Solution();
    sol.reverseString(s);
}