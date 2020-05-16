string Solution::convertToTitle(int A) {
    string strmap="ABCDEFGHIJKLMNOPQRSTUVWXYZ"; //mapping at corr indices
    string str="";
    while(A>0)
    {
        A=A-1; //because rem are mapped from 0-25 but A=1,B=2...
        int rem=A%26;
        A/=26;
        str=strmap[rem]+str; //will get reversed
    }
    return str;
}
