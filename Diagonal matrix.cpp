#include<iostream>
using namespace std;
int main()
{
  int m,n,i,j,sum=0;
  cout<<"enter the number of rows & columns";
  cin>>m>>n;
  int mat[m][n];
  cout<<endl<<"input the matrix elements\n";
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
      cin>>mat[i][j];
  }
  cout<<"given matrix\n";
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
      cout<<mat[i][j]<<" ";
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++){
      if(i==j)
        sum=sum+mat[i][j];
    }
  }
  cout<<"\n sum of the diagonal elements:"<<sum;
  return 0;
}
