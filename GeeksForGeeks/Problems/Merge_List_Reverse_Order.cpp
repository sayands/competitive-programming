#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
The structure of linked list is the following
struct Node
{
int data;
Node* next;
};
*/
struct Node *mergeResult(Node *a, Node *b)
{
    // your code goes here
    if (a == NULL && b == NULL)
        return NULL;

    Node *res = NULL;

    while (a && b)
    {
        if (a->data < b->data)
        {
            Node *temp = a->next;
            a->next = res;
            res = a;
            a = temp;
        }
        else
        {
            Node *temp = b->next;
            b->next = res;
            res = b;
            b = temp;
        }
    }
    while (a)
    {
        Node *temp = a->next;
        a->next = res;
        res = a;
        a = temp;
    }
    while (b)
    {
        Node *temp = b->next;
        b->next = res;
        res = b;
        b = temp;
    }

    return res;
}