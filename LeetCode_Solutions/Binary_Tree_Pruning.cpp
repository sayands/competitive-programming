//814 - Binary Tree Pruning

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool containsOne(TreeNode *root)
    {
        if(root == NULL)
            return false;
        
        bool a1 = containsOne(root->left);
        bool a2 = containsOne(root->right);
        
        if(!a1)
            root->left = NULL;
        if(!a2)
            root->right = NULL;
        
        return (root->val == 1) || a1 || a2;
    }
    TreeNode* pruneTree(TreeNode* root) {
        return containsOne(root)?root:NULL;
    }
};