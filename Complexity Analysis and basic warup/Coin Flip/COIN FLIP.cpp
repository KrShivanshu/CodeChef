#include <iostream>

//typedef long long ll
using namespace std;

int main() {
	// your code goes here
     long testcase;
	cin>>testcase;
	for(auto i=0;i<testcase;i++)
	{
	    long G;
	     cin>>G;
	     for(auto i=0;i<G;i++)
	     {
	          long I,N,Q,H,T;
	          cin>>I>>N>>Q;
	          if(I==1)
	          {
	               if(N%2==0)
	               {
	                    H=N/2;
	                    T=N/2;
	               }
	               else
	               {
	                    H=N/2;
	                    T=(N+1)/2;
	               }
	          }
	          else if(I==2)
	          {
	               if(N%2==0)
	               {
	                    H=N/2;
	                    T=N/2;
	               }
	               else
	               {
	                    T=N/2;
	                    H=(N+1)/2;
	               } 
	          }
	          if(Q==1)
	          cout<<H<<"\n";
	          else
	          cout<<T<<"\n";
	     }
	}
	return 0;
}
