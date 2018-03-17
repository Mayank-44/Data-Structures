/*
Node is defined as 

typedef struct node
{
   int data;
   node *left;
   node *right;
}node;

*/
#include<vector>
using namespace std;
node *lca(node *root, int v1,int v2)
{
    vector<node*> v_1,v_2;
    node *tmp=root;
    while(tmp!=NULL)
    {
        if(tmp->data==v1)
            break;
        else
            if(tmp->data>v1)
            {
                v_1.push_back(tmp);
                tmp=tmp->left;             
            } else
            if(tmp->data<v1)
            {
                v_1.push_back(tmp);
                tmp=tmp->right;
            }    
    }
    
    tmp=root;
    while(tmp!=NULL)
    {
        if(tmp->data==v2)
            break;
        else
            if(tmp->data>v2)
            {
                v_2.push_back(tmp);
                tmp=tmp->left;
            } else
            if(tmp->data<v2)
            {
                v_2.push_back(tmp);
                tmp=tmp->right;
            }    
    }
    
    for(int i=v_1.size()-1;i>=0;i--)
    {
        for(int j=v_2.size()-1;j>=0;j--)
        {
            if(v_1[i]==v_2[j])
            {
                return v_1[i];
            }
        }
    }

   return 0;
}


