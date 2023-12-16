#include<iostream>
using namespace std;
int main()
{
  int n1,n2,n,d,r,gcd;
  cout<<"enter numbers:\n";
  cin>>n1>>n2;
  n=(n1>n2)?n1:n2;
  d=(n1<n2)?n1:n2;
  do
  {
    r=n%d;
    n=d;
    d=r;
  }
  while(r!=0);
  {
    gcd=n;
  }
  cout<<"gcd of "<<n1<<" and "<<n2<<" is "<<gcd;
}
