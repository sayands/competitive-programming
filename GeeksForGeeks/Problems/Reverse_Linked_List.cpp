#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
  }
*/
// Should reverse list and return new head.
Node *reverse(Node *head)
{
    // Your code here
    Node *prev = NULL, *next = NULL;
    Node *curr = head;

    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}