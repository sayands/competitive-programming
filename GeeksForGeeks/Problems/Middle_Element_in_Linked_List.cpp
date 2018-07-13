#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* Link list Node 
struct Node {
    int data;
    Node* next;
}; */
/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
    // Your code here
    Node *slow = head, *fast = head;

    if (head != NULL)
    {
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
    }

    return slow->data;
}