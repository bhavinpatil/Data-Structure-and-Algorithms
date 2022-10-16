// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr, arr+n);
        int minn = arr[0], maxx = arr[n-1];
        int ans = arr[n-1]-arr[0];
        for(int i = 1; i<n; i++)
        {
            if(arr[i]-k<0)
            continue;
            minn = min(arr[0]+k, arr[i]-k);
            maxx = max(arr[i-1]+k, arr[n-1]-k);
            ans = min(ans, maxx-minn);
        }
        return ans;
    }
};
