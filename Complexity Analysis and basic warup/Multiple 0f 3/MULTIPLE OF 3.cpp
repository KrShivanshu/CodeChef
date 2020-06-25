#include <iostream>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	ll testcase;
	cin>>testcase;
	for(auto i=0;i<testcase;i++)
	{
	     ll k,d0,d1;
	     cin>>k>>d0>>d1;
	     ll d2=d0+d1;
	     ll c=((2*d2)%10)+((4*d2)%10)+((8*d2)%10)+((6*d2)%10);
	     ll tot=0;
	     ll cycles = (k-3)/4;
	     if(k==2)
	     {
	          tot = d0+d1;
	     }
	     else
	     {
	          tot = d0+d1+(d2%10)+(c*cycles);
	          ll leftover = (k-3)-(cycles*4);
	          ll p=2;
	          for(auto i=1;i<=leftover;i++)
	          {
	               tot += ((p*d2)%10);
	               p= (p*2)%10;
	          }
	        
	     }
	    // cout<<"tot"<<tot<<"\n";
	     if(tot%3==0)
	     cout<<"YES\n";
	     else
	     cout<<"NO\n";
	}
	
	return 0;
}
