string Solution::convertToTitle(int A) {
    string str="";
    unordered_map<int,char> m;
    for(int i=0;i<26;i++)
    {
        m[i]=i+65;
    }
    while(A>0)
    {
        A=A-1;
        int rem=A%26;
        A/=26;
        str+=m[rem];
    }
    reverse(str.begin(),str.end());
    return str;
}
