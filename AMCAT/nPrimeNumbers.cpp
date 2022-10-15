// Header Files
#include<iostream>
#include<string>
#include<vector>
using namespace std;


/*
 * num, representing the number written on the board.
 */
vector<int> calculatePrimeNumbers (int num)
{
    vector<int>  answer;
    // Write your code here
    if(num==0 || num==1) return answer;
    for(int i=2;i<=num;i++)
    {
    	int flag=0;
    	for(int j = 2; j<=i/2; j++)
    	{
    		if(i%j==0){
    			flag=1;
    			break;
    		}
    	}
    	if(flag==0) answer.push_back(i);
    }
    return answer;
}

int main()
{
    //input for num
	int num;
	cin >> num;
	
	
    //output
	vector<int> result = calculatePrimeNumbers(num);
	for ( int idx = 0; idx < result.size() - 1; idx++ )
	{
		cout << result[idx] << " ";
	}
	cout << result[result.size() - 1];
	
    return 0;
}
