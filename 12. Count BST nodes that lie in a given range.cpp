int getCount(Node *root, int l, int h)
{
    if(!root) return 0;
  // your code goes here   
  if(root->data>=l and root->data<=h)
  return 1+getCount(root->left,l,h)+getCount(root->right,l,h);
  
  if(root->data<l)
  return getCount(root->right,l,h);
  
  if(root->data>h)
  return getCount(root->left,l,h);
}
