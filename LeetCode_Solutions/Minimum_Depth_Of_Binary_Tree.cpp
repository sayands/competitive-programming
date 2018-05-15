// 111 - Minimum Depth Of Binary Tree

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
  public:
    int minDepth(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        if (root->right == NULL && root->left == NULL)
            return 1;
        if (!root->left)
            return minDepth(root->right) + 1;
        if (!root->right)
            return minDepth(root->left) + 1;

        return min(minDepth(root->left), minDepth(root->right)) + 1;
    }
};