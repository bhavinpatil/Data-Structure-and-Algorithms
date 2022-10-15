#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n, k; cin>>n>>k;
	    int arr[n], ans[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	    }
	    
	    for(int i=0; i<n; i++)
	    {
	        if(k-arr[i]>=0)
	        {
	            k = k-arr[i];
	            ans[i]=1;
	        }
	        else
	        ans[i]=0;
	    }
	    for(int i=0; i<n; i++)
	    {
	        cout<<ans[i];
	    }
	    cout<<endl;
	}
	return 0;
}
