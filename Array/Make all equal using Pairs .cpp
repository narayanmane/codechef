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
	       int arr[n];
	       for(int i=0;i<n;i++)cin>>arr[i];
	       int mx_cnt=0;
	       map<int ,int> cnt;
	       for(auto i:arr)
	       {
	              cnt[i]++;
	              mx_cnt=max(mx_cnt,cnt[i]);
	       }
	       cout<<(n-mx_cnt)<<endl;

	}
	return 0;
}
