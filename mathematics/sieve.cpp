vector<int> Solution::sieve(int A) {
    vector<int> primes(A+1,1); //size A+1 and all initialised with 1
    primes[0]=0;
    primes[1]=0;
    
    for(int i=2;i*i<=A;i++)
    {
        if(primes[i])
        {
            for(int j=2;i*j<=A;j++)
            {
                primes[i*j]=0;
            }
        }
    }
    vector<int> temp;
    for(int i=0;i<primes.size();i++)
    {
        if(primes[i])
        temp.push_back(i);
    }
    return temp;
}