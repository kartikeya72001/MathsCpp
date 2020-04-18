#include<iostream>
using namespace std;
int main()
{
	int n,rev=0;
    cin>>n;

    while(n!=0)
    {
        rev = rev*10;
        rev = rev+n%10;
        n = n/10;
    }
    cout<<rev;
	return 0;
}
