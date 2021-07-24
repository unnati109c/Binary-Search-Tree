void fun(Node* root, Node* &prev, int &f)
{
    if(!root) return;
    fun(root->left, prev, f);
    
    if(prev!=NULL and root->data<=prev->data)
    {
        f=0;
        return;
    }
    prev=root;
    
    fun(root->right, prev, f);
}
//Function to check whether a Binary Tree is BST or not.
bool isBST(Node* root) 
{
    Node* prev = NULL;
    int f=1;
    fun(root, prev, f);
    return f;
}