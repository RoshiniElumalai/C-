#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	if(n%7==0||n%10==7)
	{
		cout<<"Buzz number"<<endl;
	}
	else
	{
		cout<<"Not buzz number"<<endl;
	}
	return 0;
}
