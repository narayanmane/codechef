#include <bits/stdc++.h>
using namespace std;

int main() {
long t;
cin>>t;
while(t--){
long n,count=0;
cin>>n;
string s;
cin>>s;
for(int i=0;i<n;i++){
    if(s[i]=='1') count++;
}
count+=(120-n);
count*=10;
if(count/12>=75) cout<<"YES"<<endl;
else cout<<"NO"<<endl;

}
// your code goes here
return 0;
}
