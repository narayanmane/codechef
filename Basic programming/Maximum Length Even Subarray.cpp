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
	       if(((n*(n+1))/2)%2!=0) cout<<n-1<<endl;
	        else cout<<n<<endl;
	 }
	return 0;
}
