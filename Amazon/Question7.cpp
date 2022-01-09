// Column name from a given column number 
class Solution{
    public:
    string colName (long long int n)
    {
        string s="";
        while(n!=0)
        {
            n--;
            int r=n%26;
            s=string(1,r+'A')+s;
            n/=26;
        }
        return s;
        // your code here
    }
};