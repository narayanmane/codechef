#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	       int w1,w2,x1,x2,m;
	       cin>>w1>>w2>>x1>>x2>>m;
	       int w=w2-w1;
	       if(w>=m*x1 && w<=m*x2)
	       {
	              cout<<"1"<<endl;
	       }
	       else
	       {
	              cout<<"0"<<endl;
	       }
	}
	return 0;
}
