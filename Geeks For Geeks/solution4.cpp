class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int Asum = n*(n+1)/2;
        int Tsum;
        for(int i = 0; i<n-1; i++)
        {
            Tsum += array[i];
        }
        return Asum - Tsum;
    }
};
