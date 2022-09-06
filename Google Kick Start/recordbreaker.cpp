
/*

Isyana is given the number of visitors at her local theme park on N consecutive days. The number of visitors on the i-th day is Vi. A day is record breaking if it satisfies both of the following conditions:

Either it is the first day, or the number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.
Note that the very first day could be a record breaking day!
Please help Isyana find out the number of record breaking days.

Input
The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing the integer N. The second line contains N integers. The i-th integer is Vi and represents the number of visitors on the i-th day.

Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the number of record breaking days.

4
8
1 2 0 7 2 0 2 0
6
4 8 15 16 23 42
9
3 1 4 1 5 9 2 6 5
6
9 9 9 9 9 9

Sample Output
Case #1: 2
Case #2: 1
Case #3: 3
Case #4: 0

In Sample Case #1, the underlined numbers in the following represent the record breaking days: 12––07––2020.

In Sample Case #2, only the last day is a record breaking day: 4815162342–––.

In Sample Case #3, the first, the third, and the sixth days are record breaking days: 3––14––159––265.

In Sample Case #4, there is no record breaking day: 999999.

*/


#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    for(int i = 0; i<t; i++)
    {
        cin>>n;
        int arr[n];
        for(int j = 0; j<n; j++)
        {
            cin>>arr[j];
        }
        int ans=0;
        int max=-1;
        if(n==1)
        ans=1;
        else{
            for(int j = 0; j<n-1; j++)
            {
                if(arr[j]>max)
                {
                    max=arr[j];
                    if(arr[j]>arr[j+1])
                    ans++;
                }
            }
            if(arr[n-1]>max)
            ans++;
        }
        cout<<"Case #"<<i+1<<": "<<ans<<endl;
    }
}