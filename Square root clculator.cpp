#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i;
    float ans=0;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    while((ans*ans)<=n)
    {
        ans=ans+1;
    }
    ans--;
    if((ans*ans)!=n)
    {
        while((ans*ans)<=n)
        {
            ans+=0.001;
        }
        ans=ans-0.001;
    }
    cout<<"The Answer is "<<ans;
    return 0;
}
