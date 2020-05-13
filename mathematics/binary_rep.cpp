#include<string>
using namespace std;
string Solution::findDigitsInBinary(int A) {
    if(A==0)
    return "0";
    string str="";
    int r;
    while(A>0)
    {
        r=A%2;
        A/=2;
        str=to_string(r)+str;
    }
    return str;
}