#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
  Rotate a linked list after node k
  The input list will have at least one element  
  Return pointer to head of rotated linked list 
  Node is defined as 
  struct node
  {
     int data;
     struct node *next;
  }
*/
void rotate(struct node **head_ref, int k)
{
    // Complete this method
    if (k == 0)
        return;

    struct node *curr = *head_ref;
    int count = 1;
    while (count < k && curr)
    {
        curr = curr->next;
        count++;
    }

    if (curr == NULL)
        return;

    struct node *kthNode = curr;
    while (curr->next)
        curr = curr->next;

    curr->next = *head_ref;
    *head_ref = kthNode->next;
    kthNode->next = NULL;
}