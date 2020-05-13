int Solution::isPalindrome(int A) {
    if(A<0)//negative numbers are not palindrome
    return 0;
    int num=A;
    int sum=0;
    while(A>0)
    {
        sum=sum*10+(A%10);
        A/=10;
    }
    if(sum==num)
    return 1;
    else
    return 0;
}
