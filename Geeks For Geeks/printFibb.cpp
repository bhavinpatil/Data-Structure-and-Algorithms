class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long> ans; 
        long long sum=1, f1=0, f2=1;
        for(int i=1;i<=n;i++)
        {
            ans.push_back(sum);
            sum = f1+f2;
            f1 = f2;
            f2 = sum;
        }
        
        return ans;
        
    }
};
