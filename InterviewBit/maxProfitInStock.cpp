int Solution::maxProfit(const vector<int> &A) {
    
    if(A.size() == 1 || A.size() == 0)
    return 0;
    
    int maxx = 0;
    int minn = A[0];
    
    for(int i =0; i<A.size(); i++)
    {
        minn = min(minn, A[i]);
        maxx = max(maxx, A[i]-minn);
    }
    return maxx;
}
