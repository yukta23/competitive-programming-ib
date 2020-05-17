int Solution::solve(vector<int> &A, int B, int C) {
    string temp=to_string(C);
    int lenC=temp.size();
    long long n=A.size();
    if(n==0 || B==0)
    return 0;
    int num=0;
    bool isZeroPresent=(A[0]==0)?true:false;
    if(B>lenC)
        return 0;
    else if(B<lenC)
    {
        // 0 is not present in the vector
        if(!isZeroPresent || (isZeroPresent && B==1))
        {
            num+=pow(n,B);
        }
        else
        {
            num+=(n-1)*pow(n,B-1);
        }
    }
    else//when B==lenC
    {
        int i=0;
        while(i<B)
        {
            int tempNum=temp[i]-'0';
            int j;
            for(j=0;j<n;j++)
            {
                if(A[j]>=tempNum)
                break;
            }
            if(i==0 && isZeroPresent && B>1)
                num+=(j-1)*pow(n,B-i-1);
            else
                num+=j*pow(n,B-i-1);
            
            if(j==n || A[j]>tempNum) 
            return num;
            
            i++;
        }      
    }
    return num;
}
