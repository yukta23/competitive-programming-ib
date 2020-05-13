#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int count=0;  //T.C=O(digitsCount)
	while(n>0)
	{
		n/=10;
		count++;
	}
	cout<<count<<endl;
	return 0;
}
