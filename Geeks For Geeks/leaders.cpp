class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int>ans;
        int maxx = a[n-1];
        ans.push_back(maxx);
        
        for(int i=n-2; i>=0; i--)
        {
            maxx = max(maxx, a[i]);
            if(maxx == a[i])
            ans.push_back(a[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
