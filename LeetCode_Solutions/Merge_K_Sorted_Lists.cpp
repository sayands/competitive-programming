// 23 - Merge k Sorted Lists

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    ListNode *mergeList(ListNode *l1, ListNode *l2)
    {
        if (l1 == NULL)
            return l2;
        if (l2 == NULL)
            return l1;

        if (l1->val <= l2->val)
        {
            l1->next = mergeList(l1->next, l2);
            return l1;
        }
        else
        {
            l2->next = mergeList(l1, l2->next);
            return l2;
        }
    }
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        if (lists.empty())
            return NULL;

        while (lists.size() > 1)
        {
            lists.push_back(mergeList(lists[0], lists[1]));
            lists.erase(lists.begin());
            lists.erase(lists.begin());
        }

        return lists.front();
    }
};