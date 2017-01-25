#include<iostream>
using namespace std;
int linear_search (int a[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        return i;
    }
    return -1;
}

int binarysearch(int a[],int x,int l,int r)
{
int m;
if(l==r)
{
if(x==a[l])
    return l;
    else
    return -1;
}
else
m=(l+r)/2;
if(x<=a[m])
{
    return binarysearch(a,x,l,m);
}
else
    return binarysearch(a,x,m+1,r);
}

int ternarysearch (int a[],int n, int left, int right, int x)
{
    if(left < 0 || right > n-1 || left > right)
    {
        return -1;
    }
    if(x == a[left])
    {
        return left;
    }

    if(x == a[right])
    {
        return right;
    }
if(x < a[left])
    {
        return ternarysearch(a,n,left-1,right,x);
    }

    if (x > a[left] && x < a[right])
    {

        return ternarysearch(a,n,left+1,right-1,x);
    }
     if(x > a[right])
    {
        return ternarysearch(a,n,left,right+1,x);
    }
}
int main()
{
int n,i,a[100],x;
cout<<"Enter the number of elements in the array"<<endl;
cin>>n;
cout<<"Enter the elements of the array"<<endl;
for(i=0;i<n;i++)
cin>>a[i];
cout<<"Enter the number to be searched"<<endl;
cin>>x;
int left = n/3;
int right = (n/3)*2;
int l=0;
int r=n-1;
if(ternarysearch(a,n,left-1,right-1,x) == -1)
    {
        cout<<"Number does not exist in array.\n";
    }
    else
    {
        cout<<"The index is:"<<ternarysearch(a,n,left,right,x)<<"\n";
    }
if(linear_search(a,n,x) == -1)
    {
        cout<<"Number does not exist in array.\n";
    }
    else
    {
        cout<<"The index is:"<<linear_search(a,n,x)<<"\n";
    }

    if (binarysearch(a,x,l,r)== -1)
    {
     cout<<"Number does not exist in array.\n";
    }
    else
    {
        cout<<"The index is:"<<binarysearch(a,x,l,r)<<"\n";
    }
    return 0;
}
