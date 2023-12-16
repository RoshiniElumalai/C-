 #include<iostream>
using namespace std;
int main()
{
  int num[]={1,2,3,4,5};
  int n=sizeof(num)/sizeof(num[0]);
  int i,t;
  for(i=0;i<n/2;i++)
  {
    t=num[i];
    num[i]=num[n-1-i];
    num[n-1-i]=t;
  }
  for(i=0;i<n;i++)
  cout<<num[i]<<" ";
}
