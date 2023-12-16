#include<iostream>
using namespace std;
int main()
{
	int size,mat[size][size],sum_left=0,sum_right=0;
	cout<<endl<<"Enter size of matrix"<<endl;
	cin>>size;
	cout<<endl<<"Enter elements"<<endl;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			cin>>mat[i][j];
			if(i==j)
			sum_left+=mat[i][j];
			if((i+j)==size-1)
			sum_right+=mat[i][j];
		}
	}
	cout<<"sum of left diagonal"<<sum_left<<endl;
    cout<<"sum of right diagonal"<<sum_right<<endl;
    return 0;
}
