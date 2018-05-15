// 572 - Subtree Of Another Tree

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
    bool isSubtree(TreeNode *s, TreeNode *t)
    {
        return s && t && (isIdentical(s, t) || isSubtree(s->left, t) || isSubtree(s->right, t));
    }
    bool isIdentical(TreeNode *s, TreeNode *t)
    {
        return (!s && !t) || (s && t && s->val == t->val && isIdentical(s->left, t->left) && isIdentical(s->right, t->right));
    }
};