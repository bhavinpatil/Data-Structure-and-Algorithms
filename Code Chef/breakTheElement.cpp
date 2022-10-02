#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	    }
	    int even = 0;
	    int odd = 0;
	    for(int i=0; i<n; i++)
	        if(arr[i]%2==0) even++;
	   if(even==n) cout<<0<<endl;
	   else cout<<even<<endl;
	}
	return 0;
}
