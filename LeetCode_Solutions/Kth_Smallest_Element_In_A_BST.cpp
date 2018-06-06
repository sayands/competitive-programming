// 230 -  Kth Smallest Element in a BST
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
  public:
    int getLeftTreeElementNum(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        return 1 + getLeftTreeElementNum(root->left) + getLeftTreeElementNum(root->right);
    }
    int kthSmallest(TreeNode *root, int k)
    {
        if (root == NULL)
            return 0;
        int leftElementNum = getLeftTreeElementNum(root->left);

        if (leftElementNum + 1 == k)
            return root->val;
        else if (leftElementNum < k)
            return kthSmallest(root->right, k - leftElementNum - 1);
        else if (leftElementNum >= k)
            return kthSmallest(root->left, k);
    }
};