// MISSING_REPEATING_NUMBER
class Solution{
public:
string d(string &s,int &i)
{
    string ans;
       
        int n=s.length();
        while(i<n && s[i]!=']')
        {
            if(isdigit(s[i]))
            {
                int k=0;
                while(i<n && isdigit(s[i]))
                {
                    k=k*10+s[i++]-'0';
                }
                i++;
                string s1=d(s,i);
                while(k--)
                {
                    ans+=s1;
                    
                }
                i++;
                
            }
            else
            {
                ans+=s[i++];
            }
        }
        return ans;
    
}
    string decodedString(string s){
       int i=0;
       return d(s,i);
        // code here
    }
};

// TIME COMPLEXITY :O(N)
// SPACE COMPLEXITY:O(N)