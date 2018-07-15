#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*The structure of linked list is the following
struct node
{
int data;
node* next;
};*/
int detectloop(struct node *list)
{
    // your code goes here

    struct node *slow = list, *fast = list;
    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return 1;
    }
    return 0;
}