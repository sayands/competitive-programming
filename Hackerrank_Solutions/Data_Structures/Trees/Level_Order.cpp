
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/
#include <queue>
void levelOrder(node * root) {
  if(root == NULL)
      return;
    queue <node *>q;
    q.push(root);
    while(q.empty() == false)
    {
        node *n = q.front();
        cout<<n->data<<' ';
        q.pop();
        
        if(n->left != NULL)
            q.push(n->left);
        if(n->right !=  NULL)
            q.push(n->right);
    }
  
}