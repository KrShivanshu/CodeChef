#include <iostream>
typedef long long ll;
using namespace std;

int main() {
	// your code goes here
	ll testcase;
	cin>>testcase;
	for(auto i=0;i<testcase;i++)
	{
	     ll act,laddu=0;
	     string origin;
	     cin>>act>>origin;
	     for(auto i=0;i<act;i++)
	     {
	          string activity;
	          cin>>activity;
	          if(activity.compare("CONTEST_WON")==0)
	          { 
	               ll rank;
	               cin>>rank;
	               if(rank<=20)
	               {
	                    laddu+=(20-rank);
	               }
	               laddu+=300;
	          }
	          else if(activity.compare("TOP_CONTRIBUTOR")==0)
	          {
	               laddu+=300;
	          }
	          else if(activity.compare("BUG_FOUND")==0)
	          {
	               ll severity;
	               cin>>severity;
	               laddu+=severity;
	          }
	          else if(activity.compare("CONTEST_HOSTED")==0)
	          {
	               laddu+=50;
	          }
	     }
	     //cout<<laddu<<"\n";
	     if(origin.compare("INDIAN")==0)
	     cout<<laddu/200<<"\n";
	     else if(origin.compare("NON_INDIAN")==0)
	     cout<<laddu/400<<"\n";
	}
	return 0;
}
