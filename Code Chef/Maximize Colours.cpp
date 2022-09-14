#include <iostream>
using namespace std;

void solve()
{
    int t = 0;
    int a[3]; cin>>a[0]>>a[1]>>a[2];
    for(int i=0; i<3; i++)
    {
        if(a[i]!=0)
        {
            a[i]--;
            t++;
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j = i+1; j<3; j++)
        {
            if(a[i]>a[j])
            swap(a[i],a[j]);
        }
    }
    
    if(a[0]>=2)
    {
        cout<<t+3<<endl;
        return;
    }
    if(a[0]==1)
    {
        cout<<(a[2]>=2?t+2:t+1)<<endl;
        return;
    }
    
    cout<<(a[1]==0?t:t+1)<<endl;
}

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	solve();
	return 0;
}
