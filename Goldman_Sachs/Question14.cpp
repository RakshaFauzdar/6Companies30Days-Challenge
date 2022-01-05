// MINIMUM_SIZE_SUBARRAY_SUM
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int c=INT_MAX;
        int l=0,sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            while(sum>=target)
            {
                c=min(c,i+1-l);
                    sum-=nums[l];
                l++;
            }
        }
        if(c!=INT_MAX)
        {
            return c;
        }
        else
        {
            return 0;
        }
    }
};