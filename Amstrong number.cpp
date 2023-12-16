#include<iostream>
using namespace std;
int main()
{
	int n,r,sum=0,temp;
	cout<<"enter number:\n";
	cin>>n;
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(temp==sum)
	cout<<"amstrong";
	else
	cout<<"not";
	return 0;
}
