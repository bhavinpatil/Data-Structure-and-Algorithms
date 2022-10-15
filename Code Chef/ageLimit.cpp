#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int x, y, a; cin>>x>>y>>a;
	    if(a>=x)
	    {
	        if(a<y)
	        cout<<"YES\n";
	        else
	        cout<<"NO\n";
	    }
	    else
	    {
	        cout<<"NO\n";
	    }
	}
	return 0;
}
