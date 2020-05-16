int Solution::reverse(int A) {
    int rev=0;
    while(A!=0) //to handle negative integers as well
    {
        int rem=A%10;
        int temp=rem+rev*10;
        //to handle the cyclicity in integers as they reach the other end after overflow 
        if((temp/10)!=rev)
        return 0;
        rev=temp;
        A/=10;
    }
    return rev;
}
