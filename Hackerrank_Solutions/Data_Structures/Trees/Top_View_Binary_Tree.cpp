
/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/
#include <bits/stdc++.h>
using namespace std;

void topView(node * root)
{
   static node* temp = root;
   if(root == NULL)
    {
    return;
   }
   topView(root->left);
   cout<<root->data<<" ";
   if(root == temp)
      {
      root = root->right;//Don't want to print the root element twice
      while(root != NULL)
         {
         cout<<root->data<<" ";
         root = root->right;
      }
   } 
}
