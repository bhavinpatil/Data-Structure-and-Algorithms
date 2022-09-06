pair<long long, long long> getMinMax(long long a[], int n) {
    sort(a,a+n);
    pair<int,int>p1;
    p1.first = a[0];
    p1.second = a[n-1];
    
    return p1;
}
