#include<iostream>
using namespace std;
int main()
{
	int n,num,digit,rev=0;
	cout<<"Enter positive number: "<<endl;
	cin>>num;
	n=num;
	do
	{
		digit=num%10;
		rev=(rev*10)+digit;
		num=num/10;
	}
	while(num!=0);
	cout<<"Reverse is: "<<rev<<endl;
	if(n==rev)
	cout<<"number is palindrome"<<endl;
	else
	cout<<"number is not palindrome"<<endl;
	return 0;
}
