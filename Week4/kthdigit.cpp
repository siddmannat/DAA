#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        set<int> s(arr, arr + n);
        set<int>::iterator itr = s.begin(); 
        
        advance(itr, k - 1); 
         cout <<"Kth smallest element : "<< *itr << "\n";
 
        return 0;
    }
}
