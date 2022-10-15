#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n, x;
	    cin>>n>>x;
	    int tot = n*x;
	    if(tot%4==0)
	    {
	        cout<<tot/4<<endl;
	    }
	    else
	    {
	        cout<<(tot/4)+1<<endl;
	    }
	}
	return 0;
}
