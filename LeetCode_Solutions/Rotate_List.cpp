// 61 - Rotate List

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
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (head == NULL)
            return head;

        ListNode *start = head;
        ListNode *slow = start;
        int length = 0;
        while (head)
        {
            head = head->next;
            length++;
        }
        k = k % length;
        head = start;
        while (k--)
            head = head->next;

        while (head->next)
        {
            head = head->next;
            slow = slow->next;
        }
        head->next = start;
        start = slow->next;
        slow->next = NULL;
        return start;
    }
};