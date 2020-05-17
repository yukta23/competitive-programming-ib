#define mod 1000000007

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

int Solution::solve(int A, vector<int> &B) {
    long long int fact[A+1];
    fact[0]=1;
    for(int i=1;i<=A;i++)
    {
        fact[i]=((i)%mod*(fact[i-1])%mod)%mod;
    }
    
    vector<int> chunks;
    int j=0;
    int n=B.size();
    if(n==0)
    return 0;
    sort(B.begin(),B.end());
    for(int i=0;i<n;i++)
    {
        chunks.push_back(B[i]-j-1);
        j=B[i];
    }
    chunks.push_back(A-j);
    int total_unvisited=A-n;
    long long den=1;
    int sum_power=0;
    for(int i=0;i<chunks.size();i++)
    {
        if(chunks[i]==0)
        continue;
        den=((den)%mod*(fact[chunks[i]])%mod)%mod;
        if(i!=0 && i!=chunks.size()-1) //excluding the first and last chunk
        sum_power+=chunks[i]-1;
    }
    // int ans=(fact[total_unvisited]*power(2,sum_power))/den;
    long long numerator=((fact[total_unvisited]%mod)*power(2,sum_power)%mod)%mod;
    long long ans=numerator*(power(den,mod-2)%mod);
    return ans%mod;
}
