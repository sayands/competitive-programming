/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/


void decode_huff(node * root,string s)
{
    string ans = "";
    struct node *curr = root;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '0')
            curr = curr->left;
        else
            curr = curr->right;
        if(curr->left == NULL and curr->right == NULL)
        {
            ans = ans + curr->data;
            curr = root;
        }
    }
    cout<<ans;
}
