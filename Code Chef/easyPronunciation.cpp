/*

Problem
Words that contain many consecutive consonants, like "schtschurowskia", are generally considered somewhat hard to pronounce.

We say that a word is hard to pronounce if it contains 44 or more consonants in a row; otherwise it is easy to pronounce. For example, "apple" and "polish" are easy to pronounce, but "schtschurowskia" is hard to pronounce.

You are given a string SS consisting of NN lowercase Latin characters. Determine whether it is easy to pronounce or not based on the rule above — print YES if it is easy to pronounce and NO otherwise.

For the purposes of this problem, the vowels are the characters \{a, e, i, o, u\}{a,e,i,o,u} and the consonants are the other 2121 characters.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains a single integer NN, the length of string SS.
The second line of each test case contains the string SS.
Output Format
For each test case, output on a new line the answer — YES if SS is easy to pronounce, and NO otherwise.

Each character of the output may be printed in either uppercase or lowercase. For example, the strings YES, yeS, yes, and YeS will all be treated as identical.

*/



#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n, count=0; cin>>n;
	    string s; cin>>s;
	    for(int i=0; i<n; i++)
	    {
	        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
	        count=0;
	        else
	        count++;    
	        if(count>=4)
	        break;
	    }
	    if(count>=4) cout<<"NO\n";
	    else cout<<"YES\n";
	}
	return 0;
}
