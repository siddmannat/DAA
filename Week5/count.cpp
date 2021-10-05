#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
    int n,i,max=0,j;
    int count[256]={0};
    cin>>n;
    char arr[n],m;
    for(i=0;i<n;i++)
        cin>>arr[i];

    for(i=0;i<n;i++)
    {
        count[arr[i]]++;
        if(max<count[arr[i]])
        {
            max=count[arr[i]];
            m=arr[i];
        }

    }
    cout<<endl<<m<<" "<<max<<endl;
    }
}
