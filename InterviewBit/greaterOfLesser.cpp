int Solution::solve(vector<int> &A, vector<int> &B, int C) {
    int count1=0, count2=0;
    
    for(int i=0; i<A.size(); i++)
    {
        if(C<A[i]) count1++;
    }

    for(int i=0; i<B.size(); i++)
    {
        if(C>B[i]) count2++;
    }


    if(count1>count2) return count1;
    else return count2;
}
