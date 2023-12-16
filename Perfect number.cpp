#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,i;
	cout<<"enter number:\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	if(sum=n)
	cout<<"perfect";
	else
	cout<<"not";
	return 0;
}
