#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* struct Node
 {
   int data;
   Node* next;
 }; */
/* Should return data of n'th node from the end of linked list */
int getNthFromLast(Node *head, int n)
{
    // Your code here
    Node *curr = head;
    int length = 0;
    while (curr != NULL)
    {
        curr = curr->next;
        length++;
    }

    if (n <= length)
    {
        curr = head;

        for (int i = 1; i < length - n + 1; i++)
        {
            curr = curr->next;
        }

        return curr->data;
    }

    return -1;
}