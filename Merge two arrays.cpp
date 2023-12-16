#include<iostream>
using namespace std;
int main()
{
	int arr1[50],arr2[50],arrm[100];
	int size1,size2,i,k;
	cout<<endl<<"Enter size of first array";
	cin>>size1;
	cout<<endl<<"Enter arr1 elements";
	for(i=0;i<size1;i++)
	{
		cin>>arr1[i];
		arrm[i]=arr1[i];
	}
	k=i;
	cout<<endl<<"Enter size of arr2";
	cin>>size2;
	cout<<endl<<"Enter arr2 elements";
	for(i=0;i<size2;i++)
	{
		cin>>arr2[i];
		arrm[k]=arr2[i];
		k++;
	}
	cout<<endl<<"The merged array is ";
	for(i=0;i<k;i++)
	cout<<arrm[i]<<" ";
	cout<<endl;
	return 0;
}
