#include<iostream>
#include <algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
    long long n;
    long long c;

    long long b[10000];
    long long m[10000] ;
    cin>>n>>c;
    long long i;
    for(i=0;i<c;i++)
    {
        cin>>b[i];
        cin>>m[i];
    }
long long counter=0;
long long product=0;
for(long long k=0;k<c;++k)
{
for(long long j=k+1;j<c;++j)
{
if(m[k]<m[j])
{
    swap(m[k],m[j]);
    swap(b[k],b[j]);
}
}
}/*
long long s=0;
while(counter<=n&&s<c-1)
{
product+=m[s]*b[s];
counter=b[s]+counter;
s++;
}*/
  while(n>0 && c>0)
    {
        if(n>b[i])
        {
           n-=b[i];
           product+=(b[i]*m[i]);
        }
        else
        {
            product+=((n)*(m[i]));
            n=0;
        }
        i++;
        c--;
    }
    cout<<product;

}
