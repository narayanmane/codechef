#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	       int a,b,c,n;
	       cin>>n>>a>>b>>c;
	       if(b>=n && (a+c)>=n)
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
