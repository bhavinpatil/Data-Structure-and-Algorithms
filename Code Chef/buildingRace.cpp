#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    float chefFloor, chefinaFloor, chefSpeed, chefinaSpeed;
	    cin>>chefFloor>>chefinaFloor>>chefSpeed>>chefinaSpeed;
	    if(chefFloor/chefSpeed == chefinaFloor/chefinaSpeed)
	    {
	        cout<<"BOTH\n";
	    }
	    else if(chefFloor/chefSpeed < chefinaFloor/chefinaSpeed)
	    {
	        cout<<"CHEF\n";
	    }
	    else
	    {
	        cout<<"CHEFINA\n";
	    }
	}
	return 0;
}
