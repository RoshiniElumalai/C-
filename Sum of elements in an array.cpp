#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	int sum=0;
	int i;
	for(i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"sum of array elements:"<<sum<<endl;
	return 0;
}
