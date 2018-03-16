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
   node *head=root;
    node *tmp=new node();
    tmp->data=value;
    tmp->left=NULL;
    tmp->right=NULL;
    
    if(root==NULL)
        root=head=tmp;
    else
    {
        node *tmp1=root;
        if(tmp1->data>=value)
            root=root->left;
        else
            root=root->right;
        while(root!=NULL)
        {
            if(root->data>=value)
            {
                tmp1=root;
                root=root->left;                
            }
            else
            {
                tmp1=root;
                root=root->right;     
            }
        }
        if(tmp1->data >= value)
            tmp1->left=tmp;
        else
            tmp1->right=tmp;
    }
    return head;
}

