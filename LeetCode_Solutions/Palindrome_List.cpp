//234 - Palindrome Linked List

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
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = NULL,*curr= NULL;
        
        while(head)
        {
            prev = curr;
            curr = head;
            head = head->next;
            curr->next = prev;
        }
        head = curr;
        return head;
        
    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return true;
        
        ListNode *slow = head;
        ListNode *fast = head;
        
        while(fast->next !=NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next = reverseList(slow->next);
        slow = slow->next;
        
        while(slow)
        {
            if(head->val != slow->val)
                return false;
            head = head->next;
            slow = slow->next;
        }
        return true;
        
    }
};