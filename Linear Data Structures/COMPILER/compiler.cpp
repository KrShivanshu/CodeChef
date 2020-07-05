#include <iostream>
#include <stack>
using namespace std;

typedef long long ll;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
	     string s;
	     cin>>s;
	     stack<char>expr;// stack to store '<' 
	     ll i=0;
	     ll rCount=0;
	     for(i=0;i<s.size();i++)
	     {
	          if(s[i]=='<')
	          {
	               expr.push('<');
	          }
	          else if(s[i]=='>')
	          {
	               if(!expr.empty())
	               {
	               expr.pop();
	               if(expr.empty())
	               rCount=i+1;  //stores the last correct postion in the string
	               }
	               else
	               {
	                    rCount=i;
	                    break;
	               }
	          }
	     }
	     cout<<rCount<<"\n";
	     
	}
	return 0;
}
