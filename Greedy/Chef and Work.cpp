#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    vector<int> v(n);
	    for(int i=0;i<n;i++)cin>>v[i];
	    int lifted=0;
	    int rounds=1;
	    for(int i=0;i<n;i++)
	    {
	        
	        if(v[i]>k)
	        {
	            rounds=-1;
	            break;
	        }
	        
	        lifted+=v[i];
	        if(lifted>k)
	        {
	            rounds++;
	            lifted=v[i];
	        }
	    }
	    cout<<rounds<<endl;
	    
	    
	}
	return 0;
}
