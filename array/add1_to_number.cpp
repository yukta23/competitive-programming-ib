vector<int> Solution::plusOne(vector<int> &A) {
    int n=A.size();
    int carry=1;
    for(int i=n-1;i>=0;i--)
    {
        int temp=A[i]+carry;
        A[i]=temp%10;
        carry=temp/10;
        if(carry==0)
        break;
    }
    if(carry)
    {
        A.insert(A.begin(),carry);
    }
    auto it=A.begin();
    while(*it==0)
    {
        A.erase(it);
        it=A.begin();
    }
    return A;
}
