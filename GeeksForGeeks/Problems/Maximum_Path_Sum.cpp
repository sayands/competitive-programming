#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*Complete the function below
Node is as follows
struct Node{
	int data;
	Node *left, *right;
};
*/
int MaxPathSumUtil(Node *root, int &res)
{
    if (root == NULL)
        return 0;

    if (!root->left && !root->right)
        return root->data;

    int ls = MaxPathSumUtil(root->left, res);
    int rs = MaxPathSumUtil(root->right, res);

    if (root->left && root->right)
    {
        res = max(res, ls + rs + root->data);

        return max(ls, rs) + root->data;
    }

    return (!root->left) ? (rs + root->data) : (ls + root->data);
}
int maxPathSum(struct Node *root)
{
    //add code here.
    int res = INT_MIN;
    MaxPathSumUtil(root, res);
    return res;
}