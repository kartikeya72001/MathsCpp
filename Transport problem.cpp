#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    int c1,c2,c3,c4,n,m;
    int rick[1000],cab[1000];

    while (t>0)
    {
        cin>>c1>>c2>>c3>>c4;

        cin>>n>>m;
        for (int i=0;i<n;i++)
        {
            cin>>rick[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>cab[i];
        }

        int rickcost=0;
        for(int i=0;i<n;i++)
        {
             rickcost+=min(c1*rick[i],c2);
        }
        rickcost=min(rickcost,c3);

        int cabcost=0;
        for(int i=0;i<m;i++)
        {
            cabcost+=min(c1*cab[i],c2);
        }
        cabcost=min(cabcost,c3);

        int final=0;
        final=min(cabcost+rickcost,c4);
        t--;
        cout<<final<<endl;

    }
    return 0;
}
