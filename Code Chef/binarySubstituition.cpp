
/*

Problem
Chef has a binary string SS. He can replace any occurrence of -

0101 with aa
1010 with bb
010010 with abab
101101 with baba
While doing these operations, Chef noticed that he can end up with different strings depending upon the order of application of the operations. Given the final string containing only aa and bb, Chef wants to know the number of possible strings he might have began with.

As the number of initial strings can be large, print the result modulo 998244353998244353.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of a single line of input denoting SS, the final string obtained after applying the operations.
Output Format
For each test case, output the number of original strings that can result in the final string mod 998244353998244353.

Sample 1:
Input     Output
3           
ab          2
aa          1
abb         2

Explanation:
Test case 11: The binary strings that can result in the string abab are 01100110 and 010010.

01100110: Replace the first two characters 0101 with aa and last two characters 1010 with bb. Thus, we get abab.
010010: Replace the characters 010010 with abab.
Test case 22: The only binary string that can result in the string aaaa is 01010101. In 01010101, we replace the first two characters with aa and last two characters with aa as well.

Test case 33: The binary strings that can result in the string abbabb are 011010011010 and 0101001010.

011010011010: Replace the first two characters 0101 with aa, next two characters 1010 with bb, and last two characters 1010 with bb. Thus, we get abbabb.
0101001010: Replace the characters 010010 with abab and the characters 1010 with bb.

*/





#include <iostream>
using namespace std;

void solve()
{
    string s; cin>>s;
	    int n = s.length();
	    if(n==1) 
	    {
	        cout<<1<<endl;
	        return;
	    }
	    int ans[n] = {0};
	    ans[0] = 1;
	    ans[1] = 1 + (s[1]!=s[0]);
	    
	    for(int i=2; i<n; i++)
	    {
	        ans[i] = ans[i-1];
	        if(s[i]!=s[i-1])
	        {
	            ans[i] = (ans[i]+ans[i-2])%998244353;
	        }
	    }
	    cout<<ans[n-1]<<endl;
}

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}
