//19 - Remove Nth node from end of List

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode **main = &head, *ref=head;
        
        for(int i=0;i<n;i++)
            ref = ref->next;
        
        while(ref)
        {
            main = &(*main)->next;
            ref = ref->next;
        }
        
        *main = (*main)->next;
        return head;
    }
};