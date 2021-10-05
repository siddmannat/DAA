#include<iostream>
using namespace std;

int main()
{
  int j,tc;
  cout<<"Enter test case";
  cin>>tc;
  for(j=0;j<tc;j++)
  {
  int i,n,e;
  cin>>n;
  int arr[n],s=0,m=n/2,a1=0,a2=n-1;
  for(i=0;i<n;i++)
    cin>>arr[i];
  cin>>e;
  if((e>arr[a2])||(e<arr[a1]))
    {
      cout<<"NOT PRESENT 0\n";
    }
  else
    {
    while(a2>=a1)
    {
     s++;
     if(arr[m]==e)
        {
          cout<<"PRESENT "<<s<<"\n";
         break;
       }
      else if(e<arr[m])
       a2=m-1;
      else if(e>arr[m]) 
       a1=m+1;  
      m=(a1+a2)/2;
    }
    if(arr[a1]!=e)
    cout<<"NOT PRESENT \n";
    }
  }
}
