//Program by Saurabh Kumar
//b415053
//Lab 4
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int n,i,a[100],x;
int l,s;
cout<<"Enter the number of elements in the array"<<endl;
cin>>n;
cout<<"Enter the elements of the array"<<endl;
for(i=0;i<n;i++)
cin>>a[i];
int mini=a[0];
int maxi=a[0];
for(i=0;i<n;i++)
{
    if(a[i]>=maxi)
        {
        swap(a[i],maxi);
        }
}
for(i=0;i<n;i++)
{
 if(a[i]<=mini)
    {
    swap(a[i],mini);
    }
}

if(maxi==(mini+1)||(maxi==mini)||n==2||n==1)
{
    cout<<"Not possible"<<endl;
}
else
for(i=0;i<n;i++)
{
    if((a[i]!=maxi)&&(a[i]!=mini))
        {
        cout<<"The Required number is:"<<endl;
        cout<<a[i];
        break;
        }
}
}
