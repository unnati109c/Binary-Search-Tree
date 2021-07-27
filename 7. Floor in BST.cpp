/* Given a Binary search tree and a value X,  the task is to complete the function which will return the floor of x.

Note: Floor(X) is an element that is either equal to X or immediately smaller to X. If no such element exits return -1.

Example 1:

Input:
       8
     /  \
    5    9
   / \    \
  2   6   10
X = 3
Output: 2
Explanation: Floor of 3 in the given BST
is 2
Example 2:

Input:
       3
     /   \
    2     5
        /  \
       4    7
      /
     3
X = 1
Output: -1
Explanation: No smaller element exits */

int floor(Node* root, int key) 
{ 
	if (!root)
        return -1;
 
    if (root->data == key)
        return root->data;
 
    if (root->data > key)
        return floor(root->left, key);
 
 //Else floor may lie in the right subtree but only if there is a value lesser than 
 //or equal to the key.If not, then root is the key.
 
    int floorValue = floor(root->right, key);
    return (floorValue <= key && floorValue!=-1) ? floorValue : root->data;

}