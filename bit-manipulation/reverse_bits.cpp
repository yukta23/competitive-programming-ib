#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int n;
    cin>>n;
    unsigned int rev=0;
    while(n>0)
    {
        //bitwise left shift by 1
        rev<<=1;
        //if the current bit is 1
        if(n&1)
        {
            rev^=1; //toggle 0
        }
        n>>=1;//to get the next bit in LSB
    }
    cout<<rev;
}