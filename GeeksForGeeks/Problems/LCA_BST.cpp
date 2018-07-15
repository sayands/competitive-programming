#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*The structure of a BST Node is as follows:
struct Node {
    int data;
    Node * right, * left;
};*/
/*You are required to complete
this function*/
Node *LCA(Node *root, int n1, int n2)
{
    //Your code here
    while (root != NULL)
    {
        if (root->data > n1 && root->data > n2)
            root = root->left;
        else if (root->data < n1 && root->data < n2)
            root = root->right;
        else
            break;
    }

    return root;
}