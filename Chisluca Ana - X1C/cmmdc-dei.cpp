#include <iostream>
#include <fstream>
using namespace std;

int cmmdc(int x, int y)
{
    if(y==0)
    {
        return x;
    }
    else
    {
        if(x==0)
        {
            return y;
        }
        else
        {
            cmmdc(y,x%y);
        }
    }
}

int dei(int st,int dr, int v[])
{
    if(st==dr)
    {
        return (v[st]);
    }
    else
    {
        int m=(st+dr)/2;
        return dei(st,m,v),dei(m+1,dr,v);
    }
}

int main()
{
    int x, y, v[100];
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
    }
    cout<<dei(1,n,v);
}
