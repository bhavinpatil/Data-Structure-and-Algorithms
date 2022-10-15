#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    long long a, b, c; cin>>a>>b>>c;
	    if(a == b+c)cout<<"YES\n";
	    else if(c == a+b)cout<<"YES\n";
	    else if(b == a+c)cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
