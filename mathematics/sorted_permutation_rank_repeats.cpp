#define mod 1000003

//ans in %mod
long long int power(long long int A,long long int B)
{
    if(A==0)
    return 0;
    if(B==0)
    return 1;
    
    long result;
    if(B%2==0){
        result=power(A,B/2);
        result=(result*result)%mod;
    }
    else
    {
        result=A%mod;
        result=(result*power(A,B-1)%mod)%mod;
    }
    return result%mod;
}

int Solution::findRank(string A) {
    int n=A.size();
    long long int fact[n];
    fact[0]=1;
    for(int i=1;i<n;i++)
    {
        fact[i]=((i)%mod*(fact[i-1])%mod)%mod;
    }
    int ans=0;
    for(int i=0;i<n-1;i++)
    {
        // set<char> s;
        int count=0;
        for(int j=i+1;j<n;j++)
        {
            if(A[j]<A[i])
            count++;
            // s.insert(A[j]);
        }
        // if(s.empty())
        // continue;
        
        map<char,int> m;
        for(int k=i;k<n;k++)
        m[A[k]]++;
        
        long long int d=1;
        for(auto it=m.begin();it!=m.end();it++)
        {
            d=((d)%mod*(fact[it->second])%mod)%mod;
        }
        // int count=s.size();
        ans=(ans+(count*(fact[n-i-1])%mod)*power(d,mod-2)%mod)%mod;
    }
    return (ans+1)%mod;
}
