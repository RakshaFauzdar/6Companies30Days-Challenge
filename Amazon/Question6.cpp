// Delete N nodes after M nodes of a linked list 
class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        int c;
        Node*temp=head,*t;
        while(temp)
        {
            for(c=1;c<M && temp!=NULL ;c++)
            {
                temp=temp->next;
            }
            if(temp==NULL)
            {
                return;
            }
            t=temp->next;
            
            for(c=1;c<=N && t!=NULL;c++)
            {
                Node*d=t;
                t=t->next;
                free(d);
                
            }
            
            
            
            
            
            
            temp->next=t;
            temp=t;
        }
        //Add code here   
    }
};