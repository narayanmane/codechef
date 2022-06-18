#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        priority_queue<ll>mx_q;
        priority_queue<ll,vector<ll>,greater<ll>>mn_q;
        ll n,m,jhon_sum=0,jack_sum=0,ans=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            jhon_sum+=x;
            mn_q.push(x);
        }

        for(int i=0;i<m;i++)
        {
            ll x;
            cin>>x;
            jack_sum+=x;
            mx_q.push(x);
        }

        while(jhon_sum<=jack_sum)
        {

            int jhon_ele=mn_q.top();
            int jack_ele=mx_q.top();
            if(jhon_ele>=jack_ele)
            {
                break;
            }
            // swap
            ans++;
            jhon_sum-=jhon_ele;
            jhon_sum+=jack_ele;
            jack_sum-=jack_ele;
            jack_sum+=jhon_ele;

            mn_q.pop();
            mx_q.pop();
            mn_q.push(jack_ele);
            mx_q.push(jhon_ele);


        }
        if(jack_sum>=jhon_sum)
            cout<<-1<<endl;
        else
            cout<<ans;





    }

    return 0;
}
