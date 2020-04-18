#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    int arr[20];
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    i=0;
    if(arr[0]==9)
        i=1;

    for(i;i<n;i++)
    {
        if(arr[i]>=5)
        {
            arr[i]=9-arr[i];
        }
    }

    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
