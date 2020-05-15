int Solution::titleToNumber(string A) {
    unordered_map<char,int> m;
    for(int i=0;i<26;i++)
    {
        m['A'+i]=i+1;
    }
    int sum=0;
    int i=A.length()-1;
    int j=0;
    while(i>=0)
    {
        sum+=m[A[i]]*pow(26,j);
        i--;j++;
    }
    return sum;
}
