// 142 - Detect Cycle in Linked List And Return The Start Of The Cycle

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
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *prev = NULL;
        int isCycle = 0;
        while(slow && fast && fast->next)
        {
            prev = fast;
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast)
            {  
                isCycle = 1;
                break;
            }    
        }
        
        slow = head;
        if(!isCycle)
            return NULL;
        
        while(slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
        
        return fast;
    }
};