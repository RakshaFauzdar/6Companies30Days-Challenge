// BRIDGE IN A GRAPH
#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
using namespace std;
int main()
{
    
       ll t;
       cin>>t;
       while(t--)
       {
           string s;
           cin>>s;
           ll n=s.length();
           ll flag=0;
           for(ll i=n-1;i>0;i--)
           {
               ll x=s[i]-48;
               ll y=s[i-1]-48;
               if((x+y)>9)
               {
                   flag=1;
                   s[i]=(x+y)%10 +48;
                    s[i-1]=(x+y)/10 +48;
                    break;
               }
           }
           if(flag==1)
           {
               cout<<s<<"\n";
               continue;
           }
           string c;
           c=s[0]-'0'+s[1];
           cout<<c;
           for(ll i=2;i<n;i++)
           {
              cout<<s[i];
           }
           
           
           
           
           
           
           cout<<"\n";
       }
    
}