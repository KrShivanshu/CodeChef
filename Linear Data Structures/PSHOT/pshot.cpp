#include <iostream>
#include <string>
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
      ll result=2*n;
      string goal;
	 cin>>goal;
      ll aGoal=0,bGoal=0;
      ll aGoalLeft=n,bGoalLeft=n;
	           
	     for(ll i=0;i<(2*n);i++)
	     {
	          if(i%2==0)
	          {
	                if(goal[i]=='1')
	                {
	                aGoal++;
	                }
	                aGoalLeft--;
	          }
	          else
	          {
	                if(goal[i]=='1')
	                {
	                bGoal++;
	                }
	                bGoalLeft--;
	          }
     	     if((aGoal>(bGoal+bGoalLeft))||(bGoal>(aGoal+aGoalLeft)))
	          {
     	          result=i+1;
     	          break;
	          }
	     }
	     cout<<result<<"\n";
	}
	return 0;
}
