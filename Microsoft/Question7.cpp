// Generate Binary Numbers 
string decToBinary(int n)
{
   
    string s;
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            s.push_back('1');
        else
            s.push_back('0');
    }
   for(int i=0;i<32;i++)
   {
       if(s[i]=='1')
        return s.substr(i);
   }
}
vector<string> generate(int N)
{
    vector<string>s;
    for(int i=1;i<=N;i++)
    {
        string s1=decToBinary(i);
        s.push_back(s1);
    }
    return s;
	// Your code here
}
