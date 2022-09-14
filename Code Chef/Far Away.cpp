#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    long long n, m;
	    cin>>n>>m;
	    long long a[n];
	    for(int i =0; i<n; i++)
	    {
	        cin>>a[i];
	    }
	    long long sum = 0;
	    for(int i = 0; i<n; i++)
	    {
	        sum += max(abs(a[i]-1), abs(a[i]-m));
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
