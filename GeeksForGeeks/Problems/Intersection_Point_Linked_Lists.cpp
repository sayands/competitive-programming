#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* Link list Node 
struct Node {
    int data;
    struct Node* next;
}; */
/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */

int getCount(Node *head)
{
    int length = 0;
    Node *curr = head;
    while (curr != NULL)
    {
        length++;
        curr = curr->next;
    }

    return length;
}

int getIntersectionPoint(int d, Node *head1, Node *head2)
{
    Node *curr1 = head1, *curr2 = head2;

    for (int i = 0; i < d; i++)
    {
        if (curr1 == NULL)
            return NULL;
        curr1 = curr1->next;
    }

    while (curr1 && curr2)
    {
        if (curr1 == curr2)
            return curr1->data;
        curr1 = curr1->next;
        curr2 = curr2->next;
    }

    return -1;
}
int intersectPoint(Node *head1, Node *head2)
{
    // Your Code Here
    int c1 = getCount(head1);
    int c2 = getCount(head2);
    int d = 0;
    if (c1 > c2)
    {
        d = c1 - c2;
        return getIntersectionPoint(d, head1, head2);
    }
    else
    {
        d = c2 - c1;
        return getIntersectionPoint(d, head2, head1);
    }
}