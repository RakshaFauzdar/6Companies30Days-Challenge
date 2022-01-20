// Winner of an election
class Solution{
  public:
  
    
    vector<string> winner(string arr[],int n)
    {
        map<string,int>m;
        vector<string>v;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        int mx=0;
        string s;
        for(auto it:m)
        {
            if(it.second>mx)
            {
                mx=it.second;
                s=it.first;
            }
        }
        v.push_back(s);
        v.push_back(to_string(mx));
        return v;
        
        
        
        
        
       
    }
};
