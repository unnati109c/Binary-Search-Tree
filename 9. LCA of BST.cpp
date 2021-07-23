Node* LCA(Node *root, int n1, int n2)
{
     
//   ITERATIVE APPROACH :
     
//   if(!root) return NULL;
//   while(root!=NULL)
//   {
//       if(root->data > n1 and root->data > n2)
//       {
//           root = root->left;
//       }
//       else if(root->data < n1 and root->data < n2)
//       {
//           root = root->right;
//       }
//       else
//       {
//           return root;
//       }
//   }
//   return root;

     if (root == NULL) return NULL;

     if (root->data > n1 && root->data > n2)
     return LCA(root->left, n1, n2);

     if (root->data < n1 && root->data < n2)
     return LCA(root->right, n1, n2);

     return root;
}
