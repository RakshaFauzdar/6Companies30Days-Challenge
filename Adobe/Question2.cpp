// Next higher palindromic number using the same set of digits
class Solution{
  public:
    string nextPalin(string N) { 
        int n=N.length();
        string s=N.substr(0,n/2);
        if(next_permutation(s.begin(),s.end()))
        {
            string ans=s;
            if(n&1)
            {
                ans+=N[n/2];
            }
            reverse(s.begin(),s.end());
            ans+=s;
            return ans;
        }
        return "-1";
        //complete the function here
    }
};