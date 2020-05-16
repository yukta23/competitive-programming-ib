int Solution::trailingZeroes(int A) {
    if(A==0 || A==1)
    return 0;
    int count5=0;
    for(int i=2;i<=A;i++)
    {
        int j=i;
        while(j%5==0) //no of 5 will always be lesser than no of 2 
        {
            count5++;
            j/=5;
        }
    }
    return count5;
}
