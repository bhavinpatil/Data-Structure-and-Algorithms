//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int>mp;
        int result = 0;
        for(int i=0; i<n; i++)
        {
            int curr = k-arr[i];
            if(mp[curr])
            {
                result+=mp[curr];
            }
            mp[arr[i]]++;
        }
        return result;
    }
};
