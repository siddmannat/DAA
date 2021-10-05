#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int t=0;t<tc;t++)
    {
        int n,i,sum,k=0;
        cin>>n;
        int arr[n];
        
        for(i=0;i<n;i++)
            cin>>arr[i];
        cout<<endl;
        cin>>sum;
        int* left=arr;
        int* right=arr+n;

        sort(arr,arr+n);
        while(left<=right)
        {
            if(*left+*right==sum)
               {
                   k=1; 
                   cout<<*left<<" "<<*right<<",";
                   left++;
               }
            else if(sum>*left+*right)
                left++;
            else if(sum<*left+*right) 
                right--;
           
                
        }
        if(k==0)
        cout<<"No pair found";

    }
}

