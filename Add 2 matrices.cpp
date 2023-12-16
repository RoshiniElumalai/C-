#include<iostream>
using namespace std;
int main()
{
	int mat1[3][3],mat2[3][3],i,j,mat3[3][3];
	cout<<"Enter values of m1"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cin>>mat1[i][j];
	}
	cout<<"Enter values of m2"<<endl;
	for(i=0;i<3;i++)
	{
	 for(j=0;j<3;j++)
		cin>>mat2[i][j];
	}
	cout<<"Adding two matrices"<<endl;
	for(i=0;i<3;i++)
	{
	 for(j=0;j<3;j++)
		mat3[i][j]=mat1[i][j]+mat2[i][j];
	}
	cout<<endl<<"final matrix is "<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	    cout<<mat3[i][j]<<" ";
	    cout<<endl;
	}
    return 0;
}
