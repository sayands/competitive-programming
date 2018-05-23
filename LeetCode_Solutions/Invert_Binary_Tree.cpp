// 226 - Invert Binary Tree
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
    void swap(TreeNode **l, TreeNode **r)
    {
        TreeNode *temp = *l;
        *l = *r;
        *r = temp;
    }
    TreeNode *invertTree(TreeNode *root)
    {
        if (!root)
            return root;
        if (!root->left && !root->right)
            return root;

        invertTree(root->left);
        invertTree(root->right);
        swap(&root->left, &root->right);
        return root;
    }
};