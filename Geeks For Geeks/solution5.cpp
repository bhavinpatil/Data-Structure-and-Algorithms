class Solution{
    public:
    long long int minValue(int a[], int b[], int n)
    {
        // Your code goes here
        long long sum=0;
        sort(a, a+n);
        sort(b, b+n);
        
        for(int i=0; i<n; i++)
            sum += a[i]*b[n-i-1];
        
        return sum;
    }
};
