#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");

//sortare prin cb
int cb(int s, int d, int v[], int x)
{
    if(s<=d)
    {
        int m=(s+d)/2;
        if(v[m]==x)
        {
            return -1; //nu inseram dubluri
        }
        else
        {
            if(x>v[m])
            {
                return cb(m+1,d,v,x);
            }
            else
            {
                return cb(s,m-1,v,x);
            }
        }
    }
    else
    {
        return s;
    }
}

void inserare(int &n, int v[], int x, int p)
{
    n++;
    for(int i=n; i>p; i--)
    {
        v[i]=v[i-1];
    }
    v[p]=x;
}
void afisare(int n, int v[])
{
    int i;
    for(i=1; i<=n; i++)
    {
        cout<<v[i]<<" ";
    }
}

void creeare(int &n, int v[],int &p, int &x)
{
    while(f>>x)
    {
        p=cb(1,n,v,x);
        if(p!=-1)
            inserare(n,v,x,p);
    }

}

int main()
{
    int n=0, v[100], i,p,x;
    creeare(n,v,p,x);
    afisare(n,v);
}
