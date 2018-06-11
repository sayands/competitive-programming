// 82 - Remove Duplicates from Sorted List II

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
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode **runner = &head;

        if (!head || !head->next)
            return head;

        while (*runner)
        {
            if ((*runner)->next && (*runner)->val == (*runner)->next->val)
            {
                ListNode *temp = *runner;

                while (temp && (*runner)->val == temp->val)
                    temp = temp->next;

                *runner = temp;
            }
            else
                runner = &((*runner)->next);
        }

        return head;
    }
};