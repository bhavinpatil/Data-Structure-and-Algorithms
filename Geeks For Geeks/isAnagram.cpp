class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        if(a.size()!=b.size()) return false;
        vector<int>ahash(26,0);
        vector<int>bhash(26,0);
        for(int i=0; i<a.size();i++)
        {
            ahash[a[i]-'a']++;
            bhash[b[i]-'a']++;
        }
        
        if(ahash==bhash){
            return true;
        }
        else{
            return false;
        }
    }

};
