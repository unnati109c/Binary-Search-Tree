Node* insuc(Node* root)
{
    while(root->left)
        root=root->left;
    
    return root;
}
//Function to delete a node from BST.
Node *deleteNode(Node *root,  int key)
{
    if(!root) return NULL;
    
    if(key>root->data)
    {
        root->left = deleteNode(root->left,key);
    }
    else if(key<root->data)
    {
        root->left = deleteNode(root->left,key);
    }
    else
    {
        if(root->right and root->left)
        {
            Node* temp = insuc(root->right);
            swap(root->data, temp->data);
            root->right = deleteNode(root->right, key);
            
        }
        else if(!root->right)
        {
            Node* temp = root->left;
            delete(root);
            return temp;
        }
        else if(!root->left)
        {
            Node* temp = root->right;
            delete(root);
            return temp;
        }
    }
    return root;
}

