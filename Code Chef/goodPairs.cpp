#include <bits/stdc++.h>
#define int long long

using namespace std;
int n, a[100001], sum;
void solve()
{
    cin>>n;
    sum = 0;
    for(int i=1; i<=n; i++) cin>>a[i];
    map<int, int>m;
    for(int i=1; i<=n; i++) m[a[i]]++;
    for(auto i:m) sum+=i.second*(i.second-1)/2;
    cout<<sum<<endl;
}

signed main() {
	int t;cin>>t;
	while(t--) solve();
}
