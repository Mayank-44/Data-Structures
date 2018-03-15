/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/
void topView(node *root);
void topLeft(node *tmp1)
{
    if(tmp1!=NULL)
    {
        topLeft(tmp1->left);
        cout<<tmp1->data<<" ";
    }
}
void topRight(node *tmp2)
{
    if(tmp2!=NULL)
    {
        cout<<tmp2->data<<" ";
        topRight(tmp2->right);
        
    }    
}
void topView(node *root) {
 
    topLeft(root->left);
    topRight(root);
}

