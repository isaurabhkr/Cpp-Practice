#include<iostream>
using namespace std;
int main()
{
    long long x1,y1,n;
    cin>>x1>>y1;
    long long x0=x1;
    long long y0=y1;
    cin >>n;
    long long xi[n];
    long long yi[n];
    for(int i=0;i<n;i++)
    {
        cin>>xi[i];
        cin>>yi[i];
    }
    for(int i=0;i<n;i++)
    {
        x0=x0-xi[i];
        y0=y0-yi[i];
    }
    cout<<x0<<" "<<y0<<endl;
    return 0;
}

