void Print(Node *root, vector<int>&ans, int k1, int k2)
{
    if ( NULL == root )
        return;
     
    if ( k1 < root->data )
        Print(root->left, ans, k1, k2);
   
    if ( k1 <= root->data && k2 >= root->data )
        ans.push_back(root->data);
     
    if ( k2 > root->data )
        Print(root->right,ans, k1, k2);
}

vector<int> printNearNodes(Node *root, int low, int high) {
   
    vector<int>ans;
    Print(root, ans, low, high);
    return ans;
}