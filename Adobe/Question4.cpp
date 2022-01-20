// Amend The Sentence
class Solution{
    public:
    string amendSentence (string s)
    {
        string ans="";
        int n=s.length();
        int j=0;
        int d=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]>='A' && s[i]<='Z' && i>=1)
            {
                ans+=' ';
                ans+=s[i];
                
               
            }
            else
            {
                ans+=s[i];
            }
            
            
        }
        for(int i=0;i<ans.size();i++)
        {
            ans[i]=tolower(ans[i]);
        }
        
        return ans;
        // your code here
    }
};