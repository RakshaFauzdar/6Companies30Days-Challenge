// Generate Parentheses 
class Solution
{
    public:
    vector<string>v;
    void rec(string s,int n,int op)
    {
        if(n!=0)
        {
            rec(s+"(",n-1,op+1);
        }
        if(op!=0)
        {
            rec(s+")",n,op-1);
        }
        if(n==0 & op==0)
        {
            v.push_back(s);
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        rec("",n,0);
        return v;
        // Your code goes here 
    }