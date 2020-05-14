#include<iostream>
using namespace std;

//calculate the total xor of every pair (total n^2)
int main() 
{
	int n;
	cin>>n;
	int* arr=new int[n];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		sum^=(2*arr[i]); //only the diagnol elements left, rest all cancel eachother in xor
	}
	cout<<sum<<endl;
	return 0;
}