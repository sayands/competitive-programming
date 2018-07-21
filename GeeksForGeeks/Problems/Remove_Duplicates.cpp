#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*The structure of linked list is the following
struct Node
{
int data;
Node* next;
};*/
Node *removeDuplicates(Node *root)
{
 // your code goes here
    if(root == NULL)
        return root;
    struct Node *temp;    
    struct Node *curr = root;
    while(curr->next){
        if(curr->data == curr->next->data){
            temp = curr->next->next;
            free(curr->next);
            curr->next = temp;
        }
        else
            curr = curr->next;
   } 
   return root;
}