#include<iostream>
using namespace std;
int main()
{
	float n1,n2;
	float sum,difference,product,quotient;
	cout<<"Enter the two numbers: "<<endl;
	cin>>n1>>n2;
	sum=n1+n2;
	difference=n1-n2;
	product=n1*n2;
	quotient=n1/n2;
	cout<<endl<<"sum="<<sum;
	cout<<endl<<"difference="<<difference;
	cout<<endl<<"product="<<product;
	cout<<endl<<"quotient="<<quotient;
	return 0;
}
