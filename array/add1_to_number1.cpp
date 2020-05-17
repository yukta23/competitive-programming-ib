vector<int> Solution::plusOne(vector<int> &A) {
    reverse(A.begin(),A.end());
    int carry=1;
    for(int i=0;i<A.size();i++)
    {
        int temp=A[i]+carry;
        A[i]=temp%10;
        carry=temp/10;
        if(carry==0)
        break;
    }
    if(carry)
    A.push_back(carry);
    reverse(A.begin(),A.end());
    auto it=A.begin();
    while(*it==0)
    {
        A.erase(it);
        it=A.begin();
    }
    return A;
}
