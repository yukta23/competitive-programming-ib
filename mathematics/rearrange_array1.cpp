void Solution::arrange(vector<int> &A) {
    int n=A.size();
    for(int i=0;i<n;i++)  //A=B+CN then A%N=B and A/C=N
    {
        A[i]=A[i]+(A[A[i]]%n)*n; //given the N*N will not overflow for a signed integer
    }
    for(int i=0;i<n;i++)
    A[i]=A[i]/n;
}
