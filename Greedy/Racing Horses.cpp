#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    for(int i=0;i<n;i++)cin>>v[i];
	    sort(v.begin(),v.end());
	    int ans=INT_MAX;
	    for(int i=1;i<n;i++)
	    {
	        ans=min(ans,(v[i]-v[i-1]));
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
