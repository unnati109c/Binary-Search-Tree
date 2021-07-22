int minValue(Node* root)
{
    if(!root)
        return -1;
        
    if(root->left)
        return minValue(root->left);
    return root->data;
}
