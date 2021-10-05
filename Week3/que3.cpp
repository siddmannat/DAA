#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,i,count=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);

        for(i=0;i<n-1;i++)
        {
            if(arr[i]==arr[i+1])
            count++;
        }
        if(count!=0)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
}
