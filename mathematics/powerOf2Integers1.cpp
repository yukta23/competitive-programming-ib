int Solution::isPower(int A) {
    if(A==1)
    return 1;

    for(int i=2;i*i<=A;i++)
    {
        int p=log(A)/log(i);
        if(pow(i,p)==A)
        return 1;
    }
    return 0;
}