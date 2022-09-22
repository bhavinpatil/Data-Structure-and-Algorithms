#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n,k; cin>>n>>k;
	    long long arr[n];
	    int total=0;
	    for(int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	        total = gcd(total,arr[i]);
	    }
	    
	    long long val=0;
	    long long count = 0;
	    for(int i=0; i<n; i++){
	        val = gcd(val,arr[i]);
	        if(val == total)
	        {
	            count++;
	            val = arr[i+1];
	        }
	    }
	    
	    if(count>=k)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}
