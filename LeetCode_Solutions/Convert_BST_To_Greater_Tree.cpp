// 538 - Convert BST to Greater Tree
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
    int dfs(TreeNode *root, int sum)
    {
        if (root == NULL)
            return sum;
        root->val += dfs(root->right, sum);
        return dfs(root->left, root->val);
    }
    TreeNode *convertBST(TreeNode *root)
    {
        dfs(root, 0);
        return root;
    }
};