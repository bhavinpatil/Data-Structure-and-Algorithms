class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        // your code here
        if(n<=2) return n;
        int a=1, b=2;
        int mod = 1000000000+7;
        for(int i=3; i<=n; i++)
        {
            int temp = a;
            a = b;
            b = (a+temp)%mod;
        }
        return b;
    }
};
