 #include<iostream>
using namespace std;
int main()
{
  int arr[]={1,2,1,3,4,2,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  int i;
   int freq[100] = {0};
   for (i = 0; i < n; i++) 
        freq[arr[i]]++;
   cout<<"elements occurrences"<<endl;
  for(i=0;i<100;i++)
  {
    if(freq[i]>0)
      cout<<i<<":"<<freq[i]<<endl;
  }
  return 0;
}
