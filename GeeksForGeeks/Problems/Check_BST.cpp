#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node {
    int data;
    Node* left, * right;
}; */
/* Should return true if tree represented by root is BST. 
   For example, return  value should be 1 for following tree.
         20
     /      \ 
   10       30
  and return value should be 0 for following tree.
         10
     /      \ 
   20       30 */

bool isValidBST(Node *root, Node *minNode, Node *maxNode)
{
    if (!root)
        return true;
    if ((minNode && root->data <= minNode->data) || (maxNode && root->data >= maxNode->data))
        return false;

    return isValidBST(root->left, minNode, root) && isValidBST(root->right, root, maxNode);
}
bool isBST(Node *root)
{
    // Your code here
    return isValidBST(root, NULL, NULL);
}
