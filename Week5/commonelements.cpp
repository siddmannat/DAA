#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i;
    cin>>m;
    int arr[m];
    for(i=0;i<m;i++)
        cin>>arr[i];
    cout<<endl;
    cin>>n;
    int arr2[n];
    int res[m+n]={0};
    for(i=0;i<n;i++)
        cin>>arr2[i];
    cout<<endl;
    i=0;
    int j=0,k=0;
    while(i<m&&j<n)
    {
        if(arr[i]==arr2[j])

            {res[k]=arr[i];
            k++;
            i++;
            j++;
            }
        else if(arr[i]>arr2[j])
            j++;
        else
        i++;
   }
   
    if(k!=0)
    {   for(i=0;res[i]!=0;i++)
        cout<<res[i]<<" "; 
    }
    else
    cout<<"No common element";

}
