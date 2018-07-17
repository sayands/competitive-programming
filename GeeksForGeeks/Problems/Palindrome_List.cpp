#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*The structure of the Node is
struct Node
{
    int data;
    struct Node* next;
};*/
/*You are required to complete this method */
bool isPalindrome(struct Node **left, struct Node *right)
{
    if (right == NULL)
        return true;

    bool isp = isPalindrome(left, right->next);
    if (isp == false)
        return false;

    bool isp1 = (right->data) == (*left)->data;

    *left = (*left)->next;

    return isp1;
}
bool isPalindrome(Node *head)
{
    //Your code here
    return isPalindrome(&head, head);
}