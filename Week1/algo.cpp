#include<iostream>
using namespace std;
 int main()
 {
   int tc;
   cin>>tc;
   for(int l=0;l<tc;l++)
    {
      int n,i,j,k;
      cin>>n;
      int arr[n],p1=-1,p2=-1,p3=-1;
      for(i=0;i<n;i++)
         cin>>arr[i];
     for(i=0;i<n;i++)
      {
           for(j=0;j<n;j++)
         {
             for(k=0;k<n;k++)
             {
                 if(i!=j&&j!=k)
                 if(arr[i]+arr[j]==arr[k])
                 {
                     p1=i+1;p2=j+1;p3=k+1;
                     break;
                 }
              }
          if(p1!=-1)
             break;
         }
     if(p1!=-1)
         break;
     }
     if(p1!=-1)
     cout<<p1<<","<<p2<<","<<p3<<endl;
     else
     cout<<"NO SEQUENCE "<<endl;
   }
 }
