#include <string.h>
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
    int i=0;
    node *tmp=root;
        while(i<=s.length())
        {
            if(tmp->data!='\0')
            {
                cout<<tmp->data;
                tmp=root;
            }
            else
            {
                if(s[i]=='0')
                 tmp=tmp->left;
                else
                 tmp=tmp->right;
                i++;
            }
        
        }
}

