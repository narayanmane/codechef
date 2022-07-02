#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	       int n,p,x,y;
	       cin>>n>>p>>x>>y;
	       int arr[n];
	       for(int i=0;i<n;i++)
	       {
	              cin>>arr[i];
	       }
	       int child=0,older=0;
	       for(int i=0;i<p;i++)
	       {
	              if(arr[i]==0)
	              {child+=x;
	              }
	              if(arr[i]==1)
	              {older+=y;
	              }
	       }
	       cout<<older+child<<endl;
	}
	return 0;
}
