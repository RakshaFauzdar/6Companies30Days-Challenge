// Stock span problem
class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
        vector<int>v(n,1);
        stack<int>s;
        s.push(0);
        for(int i=1;i<n;i++)
        {
            while(!s.empty() && price[s.top()]<=price[i])
            {
                s.pop();
            }
            int ans;
            if(s.empty())
            {
                ans=i+1;
            }
            else
            {
                ans=i-s.top();
            }
            v[i]=ans;
            s.push(i);
        }
        return v;
       // Your code here
    }
};
