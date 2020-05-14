#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int n,m;
    cin>>n>>m;
    int count=0;
    unsigned int x=n^m; //take the XOR
    while(x>0)
    {
    	count+=(x&1);
    	x>>=1;
	}
	cout<<"Hamming Distance is: "<<count<<endl;
}