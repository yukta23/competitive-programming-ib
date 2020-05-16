#include<iostream>
#include<algorithm>
using namespace std;

void permutation(string str,string output)
{	
	if(str.size()==0)
	cout<<output<<endl;
	
	for(int i=0;i<str.size();i++)
	{
		permutation(str.substr(1),output+str[0]);
		
		//rotate string in a way such that second character comes in the beginning
		rotate(str.begin(),str.begin()+1,str.end());	
	}	
}

void permutation1(string str)
{
	do{
		cout<<str<<endl;
	}while(next_permutation(str.begin(),str.end())); //returns bool value
}

int main()
{
	string str;
	getline(cin,str);
	sort(str.begin(),str.end()); //will change the string to the new sorted string
	permutation(str,"");
	cout<<"\n\n";
	permutation1(str);
}