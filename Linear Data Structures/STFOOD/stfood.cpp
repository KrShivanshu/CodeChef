#include <iostream>
#include <cmath>
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
	     ll maxProfit=0;
	     for(ll j=0;j<n;j++)
	     {
	          ll s,v,p;
	          cin>>s>>v>>p;
	          ll profit=0;
	          profit=floor(v/(s+1))*p;
	          if(profit>maxProfit)
	          {
	               maxProfit=profit;
	          }
	     }
	     cout<<maxProfit<<"\n";
	}
	return 0;
}
