#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n; cin>>n;
    int A[n];
    for(int i=0; i<n; i++)
    cin>>A[i];
    
    int k; cin>>k;
    
    set<int>B;
    for(int i = 0; i<k; i++)
    {
        int temp; cin>>temp;
        B.insert(temp);
    }
    
    for(int i = 0; i<n; i++)
    {
        if(B.count(A[i])==0)
        {
            cout<<A[i]<<" ";
        }
    }
    cout<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	    solution();
	return 0;
}
