#include<iostream>
using namespace std;
int main()
{
    long int a,b;
    float c,d
    char ch;
    do
    {
        cin>>ch;
        switch(ch)
        {
            case + :cin>>a>>b;
                    cout<<a+b;
                    break;
            case - :cin>>a>>b;
                    cout<<a-b;
                    break;
            case * :cin>>a>>b;
                    cout<<a*b;
                    break;
            case / :cin>>c>>d;
                    cout<<c/d;
                    break;
            case x : return 0;
            case X : return 0;
            default :cout<<"Invalid operation. Try again.";
                    break;

        }
    }
	return 0;
}
