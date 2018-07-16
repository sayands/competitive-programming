#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node structure
struct Node {
    int data;
    Node* left, * right;
}; */
// This function should return tree if passed  tree
// is balanced, else false.  Time complexity should
//  be O(n) where n is number of nodes in tree

bool isBalanced(Node *root, int *height)
{
    int lh = 0, rh = 0;

    int l = 0, r = 0;
    if (root == NULL)
    {
        *height = 0;
        return 1;
    }

    l = isBalanced(root->left, &lh);
    r = isBalanced(root->right, &rh);

    *height = (lh > rh ? lh : rh) + 1;

    if ((lh - rh >= 2) || (rh - lh) >= 2)
        return 0;
    else
        return l && r;
}
bool isBalanced(Node *root)
{
    //  Your Code here
    int height = 0;
    return isBalanced(root, &height);
}
