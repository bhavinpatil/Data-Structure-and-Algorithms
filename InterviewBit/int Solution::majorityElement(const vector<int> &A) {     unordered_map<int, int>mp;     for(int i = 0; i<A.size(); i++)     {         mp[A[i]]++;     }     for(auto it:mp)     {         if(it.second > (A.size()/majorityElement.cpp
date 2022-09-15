int Solution::majorityElement(const vector<int> &A) {
    unordered_map<int, int>mp;
    for(int i = 0; i<A.size(); i++)
    {
        mp[A[i]]++;
    }
    for(auto it:mp)
    {
        if(it.second > (A.size()/2))
        {
            return it.first;
        }
    }
}
