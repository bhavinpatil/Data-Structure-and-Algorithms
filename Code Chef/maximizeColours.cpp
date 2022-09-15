#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int a[3], ans=0;
	    cin>>a[0]>>a[1]>>a[2];
	    if(a[0]>0)
	    {
	        ans++;
	        a[0]--;
	    }
	    if(a[1]>0)
	    {
	        ans++;
	        a[1]--;
	    }
	    if(a[2]>0)
	    {
	        ans++;
	        a[2]--;
	    }
	    sort(a,a+3);
	    reverse(a, a+3);
	    if(a[0]>0 && a[1]>0)
	    {
	        ans++;
	        a[0]--;
	        a[1]--;
	    }
	    if(a[0]>0 && a[2]>0)
	    {
	        ans++;
	        a[0]--;
	        a[2]--;
	    }
	    if(a[1]>0 && a[2]>0)
	    {
	        ans++;
	        a[1]--;
	        a[2]--;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
