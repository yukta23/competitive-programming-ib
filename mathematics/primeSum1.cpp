
vector<int> Solution::primesum(int A) {  //using prime seive
    vector<int> primes(A+1,1);
    primes[0]=0;
    primes[1]=0;
    for(int i=2;i*i<=A;i++)
    {
        if(primes[i]==1)
        {
            for(int j=2;j*i<=A;j++)
            primes[i*j]=0;
        }
    }
    vector<int> ans;
    for(int i=2;i<A-1;i++)
    {
        if(primes[i] && primes[A-i])
        {
            ans.push_back(i);
            ans.push_back(A-i);
            return ans;
        }
    }
}
