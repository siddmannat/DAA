#include <iostream>
using namespace std;
int main() {
  int tc,i,n,s,c,ni;
  cin>>tc;
  for(int j=0;j<tc;j++)
  {
    int si=0;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
    cin>>arr[i];
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
