#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    int count=0,count0=0;
	    long long arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	        if(arr[i]<0)
	        {
	            count++;
	        }
	        if(arr[i]==0)
	        {
	            count0++;
	        }
	    }
	    
	    if(count0!=0) cout<<"0\n";
	    else if(count%2==0) cout<<"0\n";
	    else cout<<"1\n";
	}
	
	return 0;
}
