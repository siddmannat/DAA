#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
int jumpSearch(int arr[], int x, int n)
{
  int i,next=2,prev=0; 
  while(arr[min(next,n)-1]<x)
  {
    prev=next;
    next=next+2;
    if(prev>=n)
    return -1;
  }
  while(arr[prev]<x)
  {
    prev++;
    if(prev==min(x,n))
    return -1;
  }
  if(arr[prev]==x)
   return prev;
  else 
  return -1;
}

int main()
{
  int tc,l;
  cin>>tc;
  for(l=0;l<tc;l++)
  {
   int i,n,x;
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++)
    cin>>arr[i];
   cin>>x;
   int s= jumpSearch(arr, x, n);
   if(s==-1)
    cout<<"NOT PRESENT\n";
    else
    cout<<"PRESENT "<<s<<"\n";
  }

}
