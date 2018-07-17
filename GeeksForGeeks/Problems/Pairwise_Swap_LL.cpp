#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
  Pairwise swap a linked list
  The input list will have at least one element  
  node is defined as 
  struct node
  {
     int data;
     struct node *next;
  }
*/

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void pairWiseSwap(struct node *head)
{
    // The task is to complete this method
    if (head && head->next)
    {
        swap(&head->data, &head->next->data);
        pairWiseSwap(head->next->next);
    }
}