#include<iostream>
#include<math.h>

using namespace std;
int main()
{
  int tc;
  cin>>tc;
  for(int k=0;k<tc;k++)
  {
   int n,i,diff,count=0,j,e;
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++)
     cin>>arr[i];
    cin>>e;
   for(i=0;i<n;i++)
   {
     for(j=i;j<n;j++)
     {
       diff=arr[i]-arr[j];
       if(abs(diff)==e)
       count++;
     }
   }
   if(count==0)
   cout<<"NOT FOUND \n";
   else
   cout<<count<<endl;
  }
}
