/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value) {
    
    if(root == NULL)
    {
        node *temp = new node;
        temp->data = value;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }
    if(value < root->data)
        root->left = insert(root->left, value);
    else if(value > root->data)
        root->right = insert(root->right, value);

   return root;
}