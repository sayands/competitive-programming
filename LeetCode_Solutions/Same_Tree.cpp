//100-Same Tree

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
    bool isSameTree(TreeNode* t1, TreeNode* t2) {
        if(t1== NULL && t2 == NULL)
            return true;
        if(t2 == NULL || t1== NULL)
            return false;
        
        return (t1->val == t2->val)&&(isSameTree(t1->left,t2->left))&&(isSameTree(t1->right,t2->right));
    }
};