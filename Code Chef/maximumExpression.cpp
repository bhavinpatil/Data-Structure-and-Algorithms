#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    string s; cin>>s;
	    sort(s.rbegin(),s.rend());
	    int plus = 0, minus = 0;
	    while(s.back()=='+'){
	        plus++;
	        s.pop_back();
	    }
	    while(s.back()=='-'){
	        minus++;
	        s.pop_back();
	    }
	    
	    string ans;
	    
	    while(!s.empty()){
	        ans+=s.back();
	        s.pop_back();
	        if(minus>0){
	            minus--;
	            ans += '-';
	        }
	        else if(plus>0){
	            plus--;
	            ans += '+';
	        }
	    }
	    
	    reverse(ans.begin(),ans.end());
	    cout<<ans<<endl;
	}
	return 0;
}
