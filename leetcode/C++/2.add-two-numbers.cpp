/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// https://leetcode.com/problems/add-two-numbers/

#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode rest(0), *p = &rest;
        int extra = 0;
        while (l1 || l2 || extra){
            if (l1)
                extra += l1->val, l1 = l1->next;
            if (l2)
                extra += l2->val, l2 = l2->next;

            p->next = new ListNode(extra % 10);
            p = p->next;
            extra /= 10;
        }
        return rest.next;
    }
};