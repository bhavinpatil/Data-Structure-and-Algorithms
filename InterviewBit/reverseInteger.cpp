int Solution::reverse(int A) {
    long int rev_num = 0, temp = abs(A);
    while(temp>0){
        rev_num = rev_num*10 + temp%10;
        temp = temp/10;
    }
    
    if(A<0){
        rev_num*=(-1);
    }
    
    if(rev_num>=INT_MAX || rev_num <= INT_MIN)
    return 0;
    else
    return rev_num;
}
