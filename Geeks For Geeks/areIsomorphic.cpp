class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string s, string t)
    {
        if(s.size() != t.size()) return 0;
        
        char map_s[128] = {0};
        char map_t[128] = {0};
        int n = s.size();
        for(int i = 0; i<n; i++)
        {
            if(map_s[s[i]]!=map_t[t[i]])return 0;
            map_s[s[i]] = i+1;
            map_t[t[i]] = i+1;
        }
        return 1;
    }
};
