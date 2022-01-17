
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int>v(2,-1);
        long long sum=0;
        int i=0,j=0;
        int k=0;
        while(i<n)
        {
            if(sum+arr[i]==s)
            {
                v[0]=j+1;
                v[1]=i+1;
                break;
            }
            else if(sum+arr[i]<s)
            {
                sum+=arr[i];
                i++;
            }
            else
            {
                sum-=arr[j];
                j++;
            }
        }
        if(v[0]==-1 && v[1]==-1)
        {
            v.pop_back();
        }
        return v;
        
        
        // Your code here
    }
};