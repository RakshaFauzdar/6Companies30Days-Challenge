// Connect Nodes at Same Level 
class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
        if(root==NULL)return;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            Node*prev=NULL;
                Node*curr=NULL;
            int s=q.size();
            for(int i=0;i<s;i++)
            {
              
                curr=q.front();
                q.pop();
                if(prev!=NULL)
                {
                    prev->nextRight=curr;
                }
                if(curr->left)
                {
                    q.push(curr->left);
                }
                if(curr->right)
                {
                    q.push(curr->right);
                }
                prev=curr;
            }
        }
        return;
       // Your Code Here
    }    
      
};