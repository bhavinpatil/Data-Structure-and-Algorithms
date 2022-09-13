#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> arr(n);
        for(int i = 0; i<n; i++)
        {
            cin>>arr[i];
        }
        
        sort(arr.begin(), arr.end());
        
        ll maxx = max(arr[0]*(ll)arr[0], arr[n-1]*(ll)arr[n-1]);
        ll minn = min({arr[0]*(ll)arr[n-1], arr[0]*(ll)arr[0], arr[n-1]*(ll)arr[n-1]});
        
        cout<<minn<<" "<<maxx<<endl;
    }
	return 0;
}
