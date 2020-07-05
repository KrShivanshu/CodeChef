#include <iostream>

using namespace std;

typedef long long ll;

int main() {
	// your code goes here
     ll t;
     cin>>t;
     for(ll i=0;i<t;i++)
     {
          ll n;
          cin>>n;
          
          ll s[n];
          for(ll j=0;j<n;j++)
          cin>>s[j];
          
          ll count=s[0];
          ll min=s[0];
          for(ll k=1;k<n;k++)
          {
               if(min>=s[k])
               {
                    min=s[k];
                    count+=s[k];
               }
               else
               {
                    count+=min;
               }
          }
          cout<<count<<"\n";
     }
	return 0;
}
