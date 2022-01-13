// Prerequisite 
class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	   
	    vector<vector<int>>adj(N);
	    for(auto &it : prerequisites)
	    {
	        adj[it.second].push_back(it.first);
	    }
	    vector<int>vis(N,0);
	    for(int i=0;i<N;i++)
	    {
	        if(is(adj,vis,i))
	        {
	            return false;
	        }
	    }
	    return true;
	    // Code here
	}
	bool is(vector<vector<int>>a,vector<int>&v,int i)
	{
	    if(v[i]==1)
	    {
	        return true;
	    }
	    if(v[i]==0)
	    {
	        v[i]=1;
	        for(auto it :a[i])
	        {
	            if(is(a,v,it))
	            {
	                return true;
	                
	            }
	        }
	    }
	    v[i]=2;
	    return false;
	}
};