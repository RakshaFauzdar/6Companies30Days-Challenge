// Minimum steps to destination
class Solution{
public:
    int minSteps(int D){
        int sum=0;
        int c=0;
        int i=0;
        while(sum<D)
        {
            sum+=c;
            c++;
            
        }
        while((sum-D)%2!=0)
        {
            sum+=c;
            c++;
            
        }
        return c-1;
        // code here
    }
};
