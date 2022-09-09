#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int bal, dep, ded, mon; cin>>bal>>dep>>ded>>mon;
	    bal = bal + (dep-ded) * mon;
	    cout<<bal<<endl;
	}
	return 0;
}
