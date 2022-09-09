#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int l, w, c; cin>>l>>w>>c;
	    
	    int area = (2*l)+(2*w);
	    int total_cost = area*c;
	    
	    cout<<total_cost<<endl;
	}
	return 0;
}
