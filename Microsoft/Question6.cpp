// Count Number of SubTrees having given Sum 
int find(Node*root,int &c,int sum)
{
    if(!root)
    {
        return 0;
    }
    int sol=root->data+find(root->left,c,sum)+find(root->right,c,sum);
    if(sol==sum)
    {
        c++;
    }
    return sol;
}
int countSubtreesWithSumX(Node* root, int X)
{
    int c=0;
    find(root,c,X);
    return c;
	// Code here
}
