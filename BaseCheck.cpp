#include<iostream>
#include<cmath>
using namespace std;
 int BaseCheck( long long int n,  long long int k,  long long int x)
{
    if(pow(x,k)>n)
    {
        x--;
       return x;
    }
    else if(pow(x,k)==n)
        return x;
    else
    {
        return(BaseCheck(n,k,++x));
    }
}
 int main()
{
     long long int x=1,n,k,t,ans;
    cin>>t;
    while(t>0)
    {
        cin>>n>>k;
        ans=BaseCheck(n,k,x);
        cout<<ans<<endl;
        t--;
    }
	return 0;
}
