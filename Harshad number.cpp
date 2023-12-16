#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter number";
	cin>>n;
 int sum=0;
 while(n>0)
 {
 	sum=sum+n%10;
 	n=n/10;
 }
 if(n%sum==0)
 cout<<"harshad number";
 else
 cout<<"not";
 return 0;
}
