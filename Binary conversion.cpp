#include <iostream>
using namespace std;
int main()
{
	long long int a[10000],n,i;
	cin>>n;
	for(i=0;n>0;i++)
	{
		a[i]=n%2;
		n= n/2;
	}
	for(i=i-1;i>=0;i--)
	{
		cout<<a[i];
	}
return 0;
}
