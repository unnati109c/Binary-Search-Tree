/*  Given a BST and a number X. The task is to check if any pair exists in BST or not whose sum is equal to X.

Example 1:

Input:
      8
    /   \
   5     9
  / \
 1   3
X = 4
Output: 1
Explanation: For the given input, there
exist a pair whose sum is, i.e, (3,1).
Example 2:

Input:
      0
       \
        1
         \ 
          3
        /  \
       2    7
             \
              8
X = 6
Output: 0
Explanation: For the given input , there
exists no such pair whose sum is 6.  */

bool findpairUtil(Node* root, int sum,
                  unordered_set<int>& set)
{
    if (root == NULL)
        return false;
 
    if (findpairUtil(root->left, sum, set))
        return true;
 
    if (set.find(sum - root->data) != set.end()) 
    {
        return true;
    }
    else
        set.insert(root->data);
 
    return findpairUtil(root->right, sum, set);
}

bool findPair(Node* root, int sum) 
{
    unordered_set<int> set;
    if (!findpairUtil(root, sum, set))
        return false;
    return true;
}
