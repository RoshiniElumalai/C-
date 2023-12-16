#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num,org_num,rem,result=0,n=0,power;
	cout<<"Enter an integer: "<<endl;
	cin>>num;
	org_num=num;
	while(org_num!=0)
	{
		org_num=org_num/10;
		++n;
	}
	org_num=num;
	while(org_num!=0)
	{
		rem=org_num%10;
		power=round(pow(rem,n));
		result+=power;
		org_num/=10;
	}
	if(result==num)
	cout<<"It is a narcissistic number"<<endl;
	else
	cout<<"It is not a narcissistic number"<<endl;
	return 0;
}
