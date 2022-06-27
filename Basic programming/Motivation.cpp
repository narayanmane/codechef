#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	       int n,x;
	       int m=0;
	       cin>>n>>x;
	       int s,r;
	       for(int i=0;i<n;i++)
	       {   
	            cin>>s>>r;
	            if(s<=x)
	            {
	                   m=max(m,r);
	            }
	       }
	       cout<<m<<endl;
	       
	}
	return 0;
}
