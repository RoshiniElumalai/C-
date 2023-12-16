#include<iostream>
using namespace std;
int main()
{
	int num,square,rem,sum=0;
	cout<<"Enter number"<<endl;
	cin>>num;
	square=num*num;
	while(square>0)
	{
		rem=square%10;
		sum=sum+rem;
		square=square/10;
	}
	if(sum==num)
	cout<<"It is neon number"<<endl;
	else
	cout<<"It is not neon number"<<endl;
	return 0;
}
