#include <iostream>
#include <fstream>
using namespace std;
ifstream f("sir.in");

int v[100],i,n,p=0,m,x;

int dei(int st, int dr, int v[])
{
    if(st<=dr)
    {
        m=(st+dr)/2;
        if(v[m]==x)
        {
            return m;
        }
        else
        {
            if(v[m]<x)
            {
                st=m+1;
                return dei(st,dr,v);
            }
            else
            {
                dr=m-1;
                return dei(st,dr,v);
            }
        }

    }
    return 0; // in cazul in care numarul nu apartine sirului
}

int main()
{
    cin>>x; //nr cautat
    f>>n;
    for(i=1; i<=n; i++)
    {
        f>>v[i];
    }
    cout<<dei(1,n,v);
}