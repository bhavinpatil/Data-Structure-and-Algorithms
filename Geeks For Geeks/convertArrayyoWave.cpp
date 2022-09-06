class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        
        // Your code here
        for(int i = 0 ; i<n; i+=2)
        {
            if(i+1>=n)
            break;
            swap(arr[i],arr.at(i+1));
        }
        return;
    }
    
    void swap(int& x, int& y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
};
