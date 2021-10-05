#include <iostream>
using namespace std;
int main() {
  int tc,i,n,s,c,ni;
  cout<<"No. of test cases\n";
  cin>>tc;
  for(int j=0;j<tc;j++)
  {
    int si=0;
  cout<<"Enter the total numbers in an array\n";
  cin>>n;
  int arr[n];
  cout<<"\nEnter the array\n";
  for(i=0;i<n;i++)
    cin>>arr[i];
  cout<<"The key element to be searched\n";
    cin>>s;
  for(i=0;i<n;i++)
  {
    if(arr[i]==s)
    {
      si=si+1;
      break;
    }
  }
  if(si==1)
  cout<<"PRESENT "<<i+1<<" \n ";
  else 
  cout<<"NOT PRESENT "<<i<<"\n";
  }
   return 0;

}
