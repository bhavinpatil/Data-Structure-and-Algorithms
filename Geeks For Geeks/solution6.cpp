class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
         int l=0,r=0,sum=0;
       if(s==0)
           return {-1};
       while(r<=n){
           if(sum<s){
               sum+=arr[r++];
           }
           else if(sum==s){
               return {l+1,r}; 
           }
           else if(sum>s){
               sum-=arr[l++];
           }
       }
       return {-1};
    }
};
