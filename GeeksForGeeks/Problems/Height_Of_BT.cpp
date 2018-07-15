#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */
/* Computes the height of binary tree with given root.  */
int height(Node *node)
{
    // Your code here
    if (node == NULL)
        return 0;
    if (node->left == NULL && node->right == NULL)
        return 1;
    if (node)
    {
        int ldepth = height(node->left);
        int rdepth = height(node->right);

        if (ldepth > rdepth)
            return ldepth + 1;
        else
            return rdepth + 1;
    }
}