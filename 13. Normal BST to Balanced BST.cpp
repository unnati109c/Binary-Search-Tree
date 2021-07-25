void InorderTraversal(Node* root, vector<Node*> &inorder)
{
    if(!root) return;
    
    InorderTraversal(root->left, inorder);
    inorder.push_back(root);
    InorderTraversal(root->right, inorder);
}

Node* balancedBSThelper(vector<Node*> &inorder, int start, int end)
{
    if (start > end)
        return NULL;
 
    int mid = (start + end)/2;
    Node *root = inorder[mid];
 
    root->left  = balancedBSThelper(inorder, start, mid-1);
    root->right = balancedBSThelper(inorder, mid+1, end);
 
    return root;
}

Node* buildBalancedTree(Node* root)
{
	vector<Node*>inorder;
	InorderTraversal(root, inorder);
	
	return balancedBSThelper(inorder, 0, inorder.size()-1);
}


