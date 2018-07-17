#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
  Sort the list of 0's,1's and 2's
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     Node *next;
  }
*/
void sortList(Node *head)
{
    //Add code here
    int count[3] = {0};

    struct Node *curr = head;
    while (curr != NULL)
    {
        count[curr->data] += 1;
        curr = curr->next;
    }

    int i = 0;
    curr = head;
    while (curr)
    {
        if (count[i] == 0)
            ++i;
        else
        {
            curr->data = i;
            --count[i];
            curr = curr->next;
        }
    }
}