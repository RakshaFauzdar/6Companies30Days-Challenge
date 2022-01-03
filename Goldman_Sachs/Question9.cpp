// NUMBER_FOLLOWING_PATTERN
class Solution{   
public:
    string printMinNumberForPattern(string S){
        int n=S.length();
        stack<int>s;
        string ans;
        for(int i=0;i<=n;i++)
        {
            s.push(i+1);
            if(i==n || S[i]=='I')
            {
                while(!s.empty())
                {
                    ans+=to_string(s.top());
                    // ans+="";
                    s.pop();
                    
                }
            }
        }
        return ans;
        
        // code here 
    }
};

// TIME COMPLEXITY :O(N)
// SPACE COMPLEXITY :O(N)