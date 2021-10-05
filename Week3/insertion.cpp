#include<iostream>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    for(int t=0;t<tc;t++)
    {
        int n,i,j=0,shift=0,comp=0,key;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];

        for(i=1;i<n;i++)
        {
            key=arr[i];
            j=i-1;
            while(j>=0 && arr[j]>key)
            {
                comp++;
                arr[j+1]=arr[j];
                shift++;
                j=j-1;
            }
            arr[j+1]=key;

        }

        for(i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<"Comparison= "<<comp<<endl<<"\n shift= "<<shift<<endl;
 

    }
}
