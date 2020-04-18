#include<iostream>
using namespace std;
int main()
{
	unsigned long int a;
	int b,c;
	int n=0;
	cin>>a>>b;
	while(a>0)
	{
		c=a%10;
		cout<<c<<endl;
		if(c==b)
		{
			n++;
		}
		a=a/10;
	}
	cout<<n;
	return 0;
}
