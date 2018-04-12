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
    vector<int> preorderTraversal(TreeNode* root) {
        if(root == NULL)
            return vector<int>();
        
        vector <int> res;
        stack<TreeNode *> treeStack;
        treeStack.push(root);
        while(!treeStack.empty())
        {
            TreeNode *temp = treeStack.top();
            res.push_back(temp->val);
            treeStack.pop();
            
            if(temp->right!=NULL)
                treeStack.push(temp->right);
            if(temp->left!=NULL)
                treeStack.push(temp->left);
        }
        return res;
    }
};