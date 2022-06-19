#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    for(int i=0;i<n;i++)cin>>v[i];
	    sort(v.begin(),v.end(),greater<int>());
	    int ans=0;
	    for(int i=0;i<n;i++)
	    {
	        ans+=max(0,(v[i]-i));
	        ans%=mod;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
