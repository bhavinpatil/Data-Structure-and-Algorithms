#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    unordered_map<int, int>mp;
	    int arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	        mp[arr[i]]++;
	    }
	    
	   // cout<<"size of map: "<<mp.size()<<endl;
	    if(mp.size()<=1) cout<<"0\n";
	    else{
	    
	    int max = 0;
	    for(auto it : mp)
	    {
	        if(it.second > max)
	        max = it.second;
	    }
	    cout<<n-max<<endl;
	    }
	    
	    
	}
	return 0;
}
