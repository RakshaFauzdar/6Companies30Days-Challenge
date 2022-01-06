// LONGEST_MOUNTAIN_ARRAY
class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        int i=0,c=0,mx=0;
        for(int i=1;i<n-1;i++)
        {
            if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
            {
                int j=i-1;
                c=3;
                
                while(j-1>=0 && arr[j-1]<arr[j])
                {
                    c++;
                    j--;
                }
                int k=i+1;
                while(k+1<n && arr[k+1]<arr[k])
                {
                    c++;
                    k++;
                }
            }
            mx=max(c,mx);
        }
        return mx;
        
    }
};