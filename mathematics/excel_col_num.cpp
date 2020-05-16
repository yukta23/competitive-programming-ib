int Solution::titleToNumber(string A) {
    int sum=0;
    int i=A.length()-1;
    int j=0;
    while(i>=0)
    {
        sum+=(A[i]-64)*pow(26,j);
        i--;j++;
    }
    return sum;
}
