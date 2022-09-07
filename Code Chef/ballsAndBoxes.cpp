#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        int s=k*(k+1)/2;
        if(n>=s)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
	// your code goes here
	return 0;
}
