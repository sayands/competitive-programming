// 160 - Intersection of Two Linked Lists

#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
  public:
    int getCount(ListNode *head)
    {
        int count = 0;
        ListNode *curr = head;
        while (curr != NULL)
        {
            count++;
            curr = curr->next;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        int c1 = getCount(headA);
        int c2 = getCount(headB);
        int d = 0;
        if (c1 > c2)
        {
            d = c1 - c2;
            return _getIntersectionNode(d, headA, headB);
        }
        else
        {
            d = c2 - c1;
            return _getIntersectionNode(d, headB, headA);
        }
    }
    ListNode *_getIntersectionNode(int d, ListNode *headA, ListNode *headB)
    {
        int i;
        ListNode *curr1 = headA, *curr2 = headB;

        for (int i = 0; i < d; i++)
        {
            if (curr1 == NULL)
                return NULL;
            curr1 = curr1->next;
        }
        while (curr1 != NULL && curr2 != NULL)
        {
            if (curr1 == curr2)
                return curr1;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        return NULL;
    }
};