#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  // This has garbage value in input trees
}; */
// Should set the nextRight for all nodes
void connect(Node *p)
{
    // Your Code Here
    if (!p)
        return;
    if (p->left)
        p->left->nextRight = p->right;

    if (p->right)
        p->right->nextRight = (p->nextRight) ? (p->nextRight->left) : NULL;

    connect(p->left);
    connect(p->right);
}