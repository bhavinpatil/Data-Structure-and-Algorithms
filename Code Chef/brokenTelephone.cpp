#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n, count=0; cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	    cin>>arr[i];
	    
	    if(arr[0]!=arr[1]) count++;
	    for(int i=1; i<n-1; i++)
	    {
	        if(arr[i]!=arr[i-1] || arr[i]!= arr[i+1])
	        count++;
	    }
	    if(arr[n-1]!=arr[n-2]) count++;
	    cout<<count<<endl;
	}
	return 0;
}
