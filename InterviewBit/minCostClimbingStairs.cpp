int Solution::solve(vector<int> &A) {
    int n = A.size();
    int firstStep = A[0];
    int dp[n];
    dp[0] = firstStep;
    dp[1] = firstStep+A[1];
    for(int i=2; i<n; i++)
    {
        dp[i] = min(dp[i-1],dp[i-2])+A[i];
    }
    return dp[n-1];
}
