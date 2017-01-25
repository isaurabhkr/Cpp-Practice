//Program by Saurabh Kumar
//b415053
//Lab 4
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int a[8]={40,9,2,3,7,6,6,11};
if(a[0]>a[1])
{
swap(a[0],a[1]);
}
if(a[1]>a[2])
{
swap(a[1],a[2]);
}
if(a[1]<a[0])
{
swap(a[0],a[1]);
}
cout<<"The Required number is:"<<endl;
cout<<a[1];
//This has complexity of O(1)
}
