// 543 - Diameter of Binary Tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int max = 0;

  public:
    int diameterOfBinaryTree(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int n = ans(root);
        return max;
    }
    int ans(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int l = ans(root->left);
        int r = ans(root->right);
        if (l + r > max)
            max = l + r;

        return l > r ? l + 1 : r + 1;
    }
};