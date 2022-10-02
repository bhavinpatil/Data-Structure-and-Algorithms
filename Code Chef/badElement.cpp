#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n];
	    unordered_map<int,int>mp;
	    for(int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	        mp[arr[i]]++;
	    }
	    if(mp.size()==0) cout<<1<<endl;
	    else{
	        int mxx = 0;
	        for(auto it:mp){
	            mxx = max(mxx, it.second);
	        }
	        cout<<n-mxx<<endl;
	    }
	    
	}
	return 0;
}
