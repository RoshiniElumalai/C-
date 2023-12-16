#include<iostream>
using namespace std;
int main()
{
  int i,j,s,k,n;
  cout<<"enter rows:\n";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<n-i;j++)
    {
      cout<<" ";
    }
    for(s=i;s<=2*i-1;s++)
    {
      cout<<s;
    }
    for(k=2*i-2;k>=i;k--)
    {
      cout<<k;
    }
    cout<<endl;
  }
}
