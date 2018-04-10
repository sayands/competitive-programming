//203 - Remove Linked List Elements 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode **curr = &head;
        
        while(*curr !=NULL)
        {
            if((*curr)->val == val)
                *curr = (*curr)->next;
            else
                curr=&(*curr)->next;
        }
        return head;
    }
};