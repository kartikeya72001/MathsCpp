#include<iostream>
using namespace std;
int main()
{
    int t=0,i,store=0,total=0;
    cin>>t;
    int bld[100];
    int arr1[100]={0},arr2[100]={0};
    for(i=0;i<t;i++)
    {
        cin>>bld[i];
    }

    int left=bld[0],right=bld[t-1];
    //left array
    for(i=0;i<t;i++)
    {
        if(left>bld[i])
        {
            arr1[i]=left;
        }
        else
        {
            arr1[i]=bld[i];
            left=bld[i];
        }
    }
    //right array
    for(i=(t-1);i>=0;i--)
    {
        if(right>bld[i])
        {
            arr2[i]=right;
        }
        else
        {
            arr2[i]=bld[i];
            right=bld[i];
        }
    }

//storage of water
    for(i=0;i<t;i++)
    {
        store=min(arr2[i],arr1[i])-bld[i];
        total+=store;
    }
    cout<<total;

    return 0;
}
