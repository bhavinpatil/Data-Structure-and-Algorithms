#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    float AD, AT, BD, BT; cin>>AD>>AT>>BD>>BT;
	    float alice = AD/AT;
	    float bob = BD/BT;
	    if(alice > bob) cout<<"alice\n";
	    else if(bob>alice) cout<<"bob\n";
	    else cout<<"equal\n";
	}
	return 0;
}
