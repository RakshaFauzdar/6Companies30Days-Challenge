// IPL 2021 - Match DAY-2

class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        vector<int>v;
        int a[n],b[n];
        a[0]=arr[0];
        b[n-1]=arr[n-1];
        for(int i=0;i<n;i++)
        {
            if(i%k==0)
            {
                a[i]=arr[i];
            }
            else
            {
                a[i]=max(a[i-1],arr[i]);
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(i%k==0)
            {
                b[i]=arr[i];
            }
            else
            {
                b[i]=max(b[i+1],arr[i]);
            }
        }
        for(int i=0;i<=n-k;i++)
        {
            v.push_back(max(b[i],a[i+k-1]));
        }
        
        return v;
        // your code here
    }
};