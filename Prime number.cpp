#include<iostream>
using namespace std;
int main()
{
	int num,i,isPRime=0;
	cout<<"Enter a number: ";
	cin>>num;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			isPRime++;
			break;
		}
	}
	if(isPRime==0)
	cout<<"Given number is a prime number"<<endl;
	else
	cout<<"Given number is a not prime number"<<endl;
	return 0;
}
