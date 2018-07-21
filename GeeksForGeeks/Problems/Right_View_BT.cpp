#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
// Should print right view of tree
void rightViewUtil(Node *root, int level, int *maxLevel)
{
    if (root == NULL)
        return;

    if (*maxLevel < level)
    {
        cout << root->data << " ";
        *maxLevel = level;
    }

    rightViewUtil(root->right, level + 1, maxLevel);
    rightViewUtil(root->left, level + 1, maxLevel);
}
void rightView(Node *root)
{
    // Your Code here
    int maxLevel = 0;
    rightViewUtil(root, 1, &maxLevel);
}