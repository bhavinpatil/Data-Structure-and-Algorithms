#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    long long a, b; cin>>a>>b;
	    if(a==1 || b==1)
	    {
	        cout<<"NO\n";
	    }
	    else if(a%2==1 && b%2==1)
	    {
	        cout<<"NO\n";
	    }
	    else
	    {
	        cout<<"YES\n";
	    }
	  }
	return 0;
}
