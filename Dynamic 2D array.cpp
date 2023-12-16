#include<iostream>
using namespace std;
int main()
{
	int row,col;
	cout<<"Enter number of rows"<<endl;
	cin>>row;
	cout<<"Enter number of columns"<<endl;
	cin>>col;
	int**arr=new int*[row];
	for(int i=0;i<row;i++)
	{
		arr[i]=new int [col];
	}
	cout<<endl<<"Enter values";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"Values in array"<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
