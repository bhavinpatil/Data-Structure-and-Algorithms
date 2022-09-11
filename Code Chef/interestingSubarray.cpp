#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    long long int n; cin>>n;
	    vector<long long int>A(n);
	    
	    long long int maxx = LLONG_MAX;
	    for(int i = 0; i<n ; i++)
	    {
	        cin>>A[i];
	        if(A[i]>=0 && maxx > A[i])
	        maxx = A[i];
	    }
	    
	    long long int maxi =*max_element(A.begin(), A.end());
	    long long int mini =*min_element(A.begin(), A.end());
	    
	    if(maxx == LLONG_MAX)
	    {
	        cout<<maxi*maxi<<" "<<mini*mini<<endl;
	    }
	    else
	    {
	        if(mini<0)
	        cout<<mini*maxi<<" "<<max(maxi*maxi, mini*mini)<<endl;
	        else
	        cout<<mini*mini<<" "<<maxi*maxi<<endl;
	    }
	}
	return 0;
}
