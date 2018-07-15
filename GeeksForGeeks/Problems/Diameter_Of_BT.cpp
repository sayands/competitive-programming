#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */
/* Computes the diameter of binary tree with given root.  */

int height(Node *root, int &ans)
{
    if (root == NULL)
        return 0;
    int lheight = height(root->left, ans);
    int rheight = height(root->right, ans);

    ans = max(ans, 1 + lheight + rheight);

    return 1 + max(lheight, rheight);
}
int diameter(Node *root)
{
    // Your code here
    if (root == NULL)
        return 0;

    int ans = INT_MIN;

    int height_of_tree = height(root, ans);
    return ans;
}