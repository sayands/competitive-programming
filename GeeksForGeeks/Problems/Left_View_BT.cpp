#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
// A wrapper over leftViewUtil()
void leftViewUtil(Node *root, int level, int *maxLevel)
{
    if (root == NULL)
        return;

    if (*maxLevel < level)
    {
        cout << root->data << " ";
        *maxLevel = level;
    }

    leftViewUtil(root->left, level + 1, maxLevel);
    leftViewUtil(root->right, level + 1, maxLevel);
}
void leftView(Node *root)
{
    // Your code here
    int maxLevel = 0;
    leftViewUtil(root, 1, &maxLevel);
}