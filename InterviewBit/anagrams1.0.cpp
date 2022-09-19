vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    map<string, vector<int>>mp;
    vector<vector<int>>ans;
    // for(int i=0; i<A.size(); i++)
    // {
    //     string s = A[i];
    //     sort(s.begin(), s.end());
    //     if(mp.count(s))
    //     {
    //         mp[s].push_back(i+1);
    //     }
    //     else
    //     {
    //         mp[s].push_back(i+1);
    //     }
    // }
    for(int i=0; i<A.size(); i++)
    {
        string s = A[i];
        sort(s.begin(), s.end());
        mp[s].push_back(i+1);
    }
    for(auto it:mp)
    {
        ans.push_back(it.second);
    }
    return ans;
}
