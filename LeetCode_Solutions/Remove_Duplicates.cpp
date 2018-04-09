//83 - Remove Duplicates From A Sorted Linked List

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *curr = head;
        while(curr){
            while(curr->next && curr->val == curr->next->val)
                    curr->next = curr->next->next;
        curr=curr->next;
      }
    return head;
    }     
};