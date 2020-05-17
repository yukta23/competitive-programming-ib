int Solution::maxSubArray(const vector<int> &A) {
    int dp[A.size()];
    dp[0]=(A[0]<0)?0:A[0];
    int max_so_far=dp[0];
    for(int i=1;i<A.size();i++)
    {
        if(dp[i-1]+A[i]<0)
        dp[i]=0;
        else
        dp[i]=dp[i-1]+A[i];
        max_so_far=max(max_so_far,dp[i]);
    }
    if(max_so_far==0)
    return *max_element(A.begin(),A.end());
    else
    return max_so_far;
}
