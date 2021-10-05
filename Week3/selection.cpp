#include<iostream>
using namespace std;
int sw=0,comp=0;

void selection(int arr[], int n)
{
    int i,j,min,temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {min=j;comp++;}
        }
        if(arr[i]>arr[min])
        {
            sw++;
            temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }

    }

}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,i;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        selection(arr,n);

        for(i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<"\n comparison= "<<comp<<"\n Swaps= "<<sw<<endl;

    }
}
