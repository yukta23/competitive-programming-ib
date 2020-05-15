int Solution::isPower(int A) { //pow(A,P) where A>0 and P>1
    if(A==1)
    return 1;
    
    for(int i=2;i*i<=A;i++) //going till sqrt(n) because min value of P can be 2 so max it will go till sqrt(n)
    {
        int j=2;
        while(pow(i,j)<=A) //T.C of pow() is logn, this is unbounded code as j is also increasing... but asymptotically- O(sqrt(n)logn)
        {
            if(pow(i,j)==A)
            return 1;
            j++;
        }
        
    }
    return 0;
}
