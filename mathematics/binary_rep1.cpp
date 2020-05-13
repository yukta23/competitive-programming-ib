string Solution::findDigitsInBinary(int A) {
    if(A==0)
    return "0";
    string str="";
    while(A>0)
    {
        int r=A%2;
        A/=2;
        str.push_back('0'+r); //push character values
    }
    reverse(str.begin(),str.end());
    return str;
}