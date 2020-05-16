int Solution::gcd(int A, int B) {
    if(B==0 || A==B)
    return A;
    if(A==0)
    return B;
    
    if(A<B)
    {
        int temp=A;
        A=B;
        B=A;
    }
    return gcd(B,A%B);
}
