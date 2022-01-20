// LEADER_IN_THE_ARRAY
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int>v;
        int d=a[n-1];
        v.push_back(d);
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>=d)
            {
                d=a[i];
                v.push_back(a[i]);
            }
        }
        reverse(v.begin(),v.end());
        return v;
        // Code here
        
    }
};