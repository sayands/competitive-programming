#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*The structure of linked list is the following
struct Node
{
int data;
Node* next; 
};*/
/*The function removes the loop from the linked list if present
You are required to complete this method*/
void removeTheLoop(Node *node)
{
    //Your code here
    Node *slow = node, *fast = node;

    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            while (fast->next != slow)
                fast = fast->next;
            fast->next = NULL;
            return;
        }
    }
}