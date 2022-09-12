class Solution{
    public:
    long long solve(int arr[], int n){
    // your code here
    map<int, int>f;
    for(int i = 0; i<n; i++)
    {
        f[arr[i]]++;
    }
    long long ans = 0, freq = 0;
    
    for(auto it:f)
    {
        freq = freq + it.second;
        ans+=(n-freq)*it.second;
    }
    return ans;
    }
};
