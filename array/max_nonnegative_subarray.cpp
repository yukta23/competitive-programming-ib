vector<int> Solution::maxset(vector<int>& A) {
    int n=A.size();
    long long sum=0;
    long long max=INT_MIN;
    int prev=-1;
    int final_prev=-1;
    int len=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=A[i];
        if(A[i]<0)
        {
            sum=0;
            prev=i;
        }
        if(sum>max || (sum==max && i-prev>len))
        {
            max=sum;
            final_prev=prev;
            len=i-prev;
        }
    }
    vector<int> ans;
    int count=0;
    while(count<len)
    {
        ans.push_back(A[final_prev+count+1]);
        count++;
    }
    return ans;
}
