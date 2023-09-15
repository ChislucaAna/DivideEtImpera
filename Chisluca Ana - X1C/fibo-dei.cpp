#include<iostream>
using namespace std;


int dei(int st, int dr)
{
    if(n==1 || n==2)
    {
        return n;
    }
    else
    {

        return dei(n-1)  + dei(n-2);
}
}
int main()
{
    int ;
    cin>>n;
    cout<<dei(1,n);
}
