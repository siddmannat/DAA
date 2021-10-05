#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int cou(int arr[],int n, int e)
{
  int *low=lower_bound(arr,arr+n,e);
  if(low==(arr+n)||*low!=e)
  return 0;
  int *up= upper_bound(arr,arr+n,e);
  return up-low;

}

int main()
{ 
  int tc;
  cin>>tc;
  for(int k=0;k<tc;k++)
  {
    int n;
   cin>>n;
   int arr[n],e,i,count=0;
   for(i=0;i<n;i++)
     cin>>arr[i];
   cin>>e;
   count= cou(arr,n,e);
   if(count==0)
   cout<<"Not PRESENT "<<endl;
   else
   cout<<e<<count<<endl;
  } 

}
