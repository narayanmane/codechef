#include<bits/stdc++.h>
#include <iostream>
using namespace std;
void useprepost(int pre[],int arr[],int post[],int n)
{
       pre[0]=arr[0];
       for(int i=1;i<n;i++)
       {
              pre[i]=gcd(pre[i-1],arr[i]);
       }
       post[n-1]=arr[n-1];
       for(int i=n-2;i>=0;i--){
              post[i]=gcd(post[i+1],arr[i]);
       }
        
}
int gcdrange(int p,int q, int pre[] ,int post[],int n)
{
       if(p==0)
       {
              return post[q+1];
       }
       if(q==n-1)
       {
              return pre[p-1];
       }
       return gcd(pre[p-1],post[q+1]);
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	       int n;
	       cin>>n;
	       int pre[n];int post[n];
	       int arr[n];
	       for(int i=0;i<n;i++)
	       {
	              cin>>arr[i];
	       }
	       useprepost(pre,arr,post,n);
	       int ans=0;
	       for(int i=0;i<n;i++)
	       {
	              if(gcdrange(i,i,pre,post,n)>1)
	              {ans++;
	              }
	       }
	       cout<<ans<<endl;
	}
	return 0;
}

