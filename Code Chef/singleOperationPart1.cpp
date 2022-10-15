#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int l, count=0;
	    cin>>l;
	    char s[l]; 
	    cin>>s;
	    for(int i=0; s[i]!='\0';i++)
	    {
	        if(s[i]=='1')
	        count++;
	        	   else{
	        break;
	    }

	    }
	    cout<<count<<endl;
	}
	return 0;
}
