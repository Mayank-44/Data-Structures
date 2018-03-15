
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        // Write your code here.
        int left_height=0;
        int right_height=0;
        
        if(root->left!=NULL)
            left_height=1+height(root->left);
        
        if(root->right!=NULL)
            right_height=1+height(root->right);
        
        if(left_height >= right_height)
            return left_height;
        else
            return right_height;
    }
  
