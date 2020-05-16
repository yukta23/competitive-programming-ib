int Solution::findRank(string A) {
    int sum=0;
    int mod=1000003;
    long long int fact[A.size()];
    fact[0]=1;
    fact[1]=1;
    
    for(int i=2;i<A.size();i++) //max factorial that we can search for is A.size()-1
    fact[i]=((i)%mod*(fact[i-1])%mod)%mod;
    
    for(int i=0;i<A.length()-1;i++)
    {
        int count=0;
        for(int j=i+1;j<A.length();j++)
        {
            if(A[j]<A[i])
            count++;
        }
        sum=(sum+(count*fact[A.length()-i-1])%mod)%mod;
    }
    return (sum+1)%mod;
}
