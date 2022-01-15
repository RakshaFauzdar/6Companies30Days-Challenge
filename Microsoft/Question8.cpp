// Find All Four Sum Numbers 
class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        vector<vector<int>>v;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        set<vector<int>>s1;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++ )
            {
                int s=j+1;
                int e=n-1;
                while(s<e)
                {
                int sum=arr[i]+arr[j]+arr[s]+arr[e];
                if(sum==k)
                {
                    s1.insert({arr[i],arr[j],arr[s],arr[e]});
                    s++;
                    e--;
                }
                else if(sum>k)
                {
                    e--;
                }
                else
                {
                    s++;
                }
                }
            }
        }
        for(auto it:s1)
        {
            v.push_back(it);
        }
        
        return v;
        
        // Your code goes here
    }
};