struct Node* minValue(struct Node* current)
{
    while (current->left != NULL) 
    {
        current = current->left;
    }
    return current;
}

struct Node* inOrderSuccessor(struct Node* root, struct Node* n)
{
    if (n->right != NULL)
        return minValue(n->right);

    struct Node* succ = NULL;

    while (root != NULL) 
    {
        if (n->data < root->data) 
        {
            succ = root;
            root = root->left;
        }
        else if (n->data > root->data)
            root = root->right;
        else
            break;
    }

    return succ;
}
