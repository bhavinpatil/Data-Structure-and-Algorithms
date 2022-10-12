#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    string s; cin>>s;
	    int one = 0, zero = 0;
	    for(int i=0; i<n; i++)
	    {
	        if(s[i]=='0') zero++;
	        else one++;
	    }
	    if(n==1) cout<<"YES\n";
	    else if(zero%2==1 && one%2==1) cout<<"NO\n";
	    else cout<<"YES\n";
	}
	return 0;
}
