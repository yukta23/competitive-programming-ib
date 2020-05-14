#include<bits/stdc++.h>
using namespace std;

void print_binary(int n)
{
	vector<int> binary;
	if(n==0)
	{
		binary.push_back(0);
	}
	else
	{
		while(n>0)
		{
			binary.push_back(n%2);
			n/=2;
		}
		reverse(binary.begin(),binary.end());	
	}
	for(int i=0;i<binary.size();i++)
	cout<<binary[i]<<" ";
	cout<<endl;
}

int main()
{
    unsigned int n;
    cin>>n;
    unsigned int toggle=0;
    int index=0;
    unsigned int rev=0;
    while(n>0)
    {
    	print_binary(rev);
        //if the current bit is 0 then set it to 1
        if(!(n&1)) //n&1==0 doesn't work
        {
        	rev=rev | (1<<index);
        }
        n>>=1;//to get the next bit in LSB
        index++;
    }
    cout<<rev;
}