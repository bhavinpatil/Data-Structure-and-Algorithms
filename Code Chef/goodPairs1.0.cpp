#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    map<int,int>f;
	    for(int i=0; i<n; i++)
	    {
	        int x; cin>>x;
	        f[x]++;
	    }
	    
	    long long ans = 0;
	    for(auto it:f)
	    {
	        long long freq = it.second;
	        ans += freq * (freq-1)/2;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
