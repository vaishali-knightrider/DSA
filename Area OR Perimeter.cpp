#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,b,area,peri;
    cin>>l;
    cin>>b;
    area=l*b;
    peri=2*(l+b);
    if(area>peri)
    {
        cout<<"Area"<<"\n"<<area;
    }
    else if(peri>area)
    {
        cout<<"Peri"<<"\n"<<peri;
    }
    else
    {
        cout<<"Eq"<<"\n"<<peri;
    }
}
