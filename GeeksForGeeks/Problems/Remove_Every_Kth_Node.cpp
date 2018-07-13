#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
};*/
/*You are required to complete this method*/
Node *deleteK(Node *head, int K)
{
    //Your code here
    Node *curr = head, *prev = head;
    if (head == NULL)
        return NULL;
    if (K == 1)
        return NULL;
    int count = 0;
    while (curr != NULL)
    {
        count++;

        if (K == count)
        {
            //delete(prev->next);
            prev->next = curr->next;

            count = 0;
        }

        if (count != 0)
            prev = curr;

        curr = curr->next;
    }

    return head;
}