//404 - Sum Of Left Leaves

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
    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0;
        
        if(root == NULL)
            return 0;

        
        if(root->left!=NULL){
            if(root->left->left == NULL && root->left->right == NULL)
                ans+=root->left->val;
            else
                ans+=sumOfLeftLeaves(root->left);
        }
        ans+=sumOfLeftLeaves(root->right);
        
        return ans;
    }
};