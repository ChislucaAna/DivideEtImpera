#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");

int x; int v[100], n, i=1,m,a,b;

void dei(int st, int dr, int v[])
{
    if(st==dr)
    {
        //aflam cmmdc(v[st],v[st+1])
        a = v[st];
        b = v[st+1];
        while(a!=b)
        {
            if(a>b)
            {
                a-=b;
            }
            else
            {
                b-=a;
            }
        }
        v[st+1]=b;
    }
    else
    {
        m = (st+dr)/2;
        dei(st,m,v);
        dei(m+1,dr,v);
    }
}

int main()
{
    f>>n;
    while(i<=n)
    {
        f>>v[i];
        i++;
    }
    dei(1,n-1,v); //pe v[n-1] il va compara cu v[n]
    cout<<v[n]; // in v[m] vom avea cmmdc
}