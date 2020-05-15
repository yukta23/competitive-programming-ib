int Solution::isPower(int A) {
    
    if(A==1)
    return 1;
    
    for(int i=2;i*i<=A;i++)
    {
        float p=log(A)/log(i);
        if(ceil(p)==floor(p)) //to check if it is an integer
        return 1;
    }
    return 0;
}
