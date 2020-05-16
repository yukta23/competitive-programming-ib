int Solution::cpFact(int A, int B) {  //gives TLE
    int ans=0;
    vector<int> divisors;
    for(int i=1;i*i<=A;i++)
    {
        if(A%i==0)
        {
            divisors.push_back(i);
            if(i!=A/i)
            divisors.push_back(A/i);
        }
    }
    for(int i=0;i<divisors.size();i++)
    {
        if(__gcd(divisors[i],B)==1)
        ans=max(ans,divisors[i]);
    }
    return ans;
}
