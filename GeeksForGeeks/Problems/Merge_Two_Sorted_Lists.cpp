#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* Link list Node  
struct Node {
    int data;
    Node* next;
}; */
Node *SortedMerge(Node *head1, Node *head2)
{
    // Your Code Here
    struct Node *res;

    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;

    if (head1->data <= head2->data)
    {
        res = head1;
        res->next = SortedMerge(head1->next, head2);
    }
    else
    {
        res = head2;
        res->next = SortedMerge(head1, head2->next);
    }

    return res;
}