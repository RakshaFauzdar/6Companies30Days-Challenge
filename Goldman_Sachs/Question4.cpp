// GCD OF STRINGS
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n=str1.length();
        int m=str2.length();
        string ans="";
        string a=str1+str2;
        string b=str2+str1;
        if(a==b)
        {
            int c=gcd(n,m);
            ans=str1.substr(0,c);
               
        }
        return ans;
        
        
    }
};