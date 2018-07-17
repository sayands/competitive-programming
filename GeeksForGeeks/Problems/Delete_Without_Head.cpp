#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* Link list node 
struct Node
{
    int data;
    Node* next;
}*/
// This function should delete node from linked list. The function
// may assume that node exists in linked list and is not last node
void deleteNode(Node *node)
{
    // Your code here
    struct Node *temp = node->next;
    node->data = temp->data;
    node->next = temp->next;
    free(temp);
}