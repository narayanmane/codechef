#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	       int u,v,a,s;
	       cin>>u>>v>>a>>s;
	       if((v*v)>=((u*u)-(2*a*s)))
	       {
	              cout<<"YES"<<endl;
	       }
	       else
	       {
	              cout<<"NO"<<endl;
	       }
	}
	return 0;
}
