#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//function Template for C++
/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
/* Should convert tree to its mirror */
void swap(Node **l, Node **r)
{
    Node *temp = *l;
    *l = *r;
    *r = temp;
}
void mirror(Node *root)
{
    // Your Code Here
    if (root && root->left && root->right)
    {
        mirror(root->left);
        mirror(root->right);
        swap(&root->left, &root->right);
    }

    //return root;
}