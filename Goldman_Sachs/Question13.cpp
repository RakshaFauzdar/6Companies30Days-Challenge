//ARRAY_DIVISIBILITY_PROBLEM 
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        int n=nums.size();
        if(n&1)
        {
            return 0;
        }
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[nums[i]%k]++;
        }
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]%k==0)
            {
                if(m[0]&1)
                {
                    return 0;
                }
            }
            else
            {
                if(m[nums[i]%k]!=m[k-nums[i]%k])
                {
                    return 0;
                }
            }
        }
        return 1;
        // Code here.
    }
};