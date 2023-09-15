#include <iostream> //merge sort/ sortare prin interclasare
using namespace std;

void interclaseaza(int s, int d, int &m, int v[])
{
    int i,j,k,x[100];
    i=s;
    j= m+ 1;
    k=1;
    while(i<=m && j<=d)
    {
        if(v[i]<v[j])
        {
            x[k]=v[i];
            i++;
        }
        else
        {
            x[k]=v[j];
            j++;
        }
        k++;
    }
    while(i<=m)
    {
        x[k]=v[i];
        i++;
        k++;
    }
    while(j<=d)
    {
        x[k]=v[j];
        j++;
        k++;
    }
    for(k=1, i=s; i<=d; k++,i++)
    {
        v[i]=x[k];
    }

}
int MS(int s, int d, int v[])
{
    int m;
    if(s<d)
    {
        m=(s+d)/2;
        MS(s,m,v);
        MS(m+1,d,v);
        interclaseaza(s,d,m,v);
    }
}

int main()
{
    int i, v[100],n;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>v[i];
    }
    MS(1,n,v);
    for(i=1; i<=n; i++)
    {
        cout<<v[i]<<" ";
    }
}
