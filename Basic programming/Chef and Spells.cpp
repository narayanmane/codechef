#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	       int a,b,c;
	       cin>>a>>b>>c;
	       int x=max(a+b,max(b+c,c+a));
	       cout<<x<<endl;
	}
	return 0;
}
