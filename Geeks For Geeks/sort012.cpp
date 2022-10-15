class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here
        int zero=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                swap(a[i],a[zero]);
                zero++;
            }
        }
        
        for(int i=zero;i<n; i++)
        {
            if(a[i]==1){
                swap(a[i],a[zero]);
                zero++;
            }
        }
    }
};
