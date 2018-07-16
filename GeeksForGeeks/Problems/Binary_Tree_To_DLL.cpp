#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* Structure for tree and linked list
struct Node
{
    int data;
    // left is used as previous and right is used
    // as next in DLL
    Node *left, *right;
}; */
// This function should convert a given Binary tree to Doubly
// Linked List
// root --> Root of Binary Tree
// head_ref --> Pointer to head node of created doubly linked list
void BToDLL(Node *root, Node **head_ref)
{
    if (root == NULL)
        return;

    BToDLL(root->right, head_ref);

    root->right = *head_ref;

    if (*head_ref != NULL)
        (*head_ref)->left = root;

    *head_ref = root;

    BToDLL(root->left, head_ref);
}
