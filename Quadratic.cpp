#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c;
	float root1,root2,d;
	cin>>a>>b>>c;
	d=(b*b)-4*a*c;
	if(d>=0)
    {
        root1 = ((-b+(sqrt(d)))/2*a);
        root2 = ((-b-(sqrt(d)))/2*a);
        if(root1==root2)
        {
            cout<<"Real and Equal"<<endl;
        }
        else if(root1!=root2)
        {
            cout<<"Real and Distinct"<<endl;
        }
        cout<<root1;
		cout<<" "<<root2;
	}
	else{
		cout<<"Imaginary";
	}
	return 0;

}
