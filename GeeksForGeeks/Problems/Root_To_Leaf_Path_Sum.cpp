#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
/*you are required to 
complete this function */
bool hasPathSum(Node *node, int sum)
{
    //Your code here
    if (node == NULL)
        return false;

    if (!node->left && !node->right)
        return sum == node->data;

    return hasPathSum(node->left, sum - node->data) || hasPathSum(node->right, sum - node->data);
}