#include <iostream>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n, m; cin>>n>>m;
	    ll a[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	    }
	    ll ans=0;
	    for(int i=0; i<n; i++)
	    {
	        ans += max(abs(a[i]-1),abs(a[i]-m));
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
