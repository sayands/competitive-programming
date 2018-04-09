//21 - Merge Sorted Lists

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode res(INT_MIN);
        ListNode *curr = &res;
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val<=l2->val){
                curr->next = l1;
                l1=l1->next;
            }
            else{
                curr->next=l2;
                l2=l2->next;
            }
            curr=curr->next;
        }
        
        curr->next = l1 ? l1:l2;
        
        return res.next;
    }
};