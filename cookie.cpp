#include<iostream>
#include<stdio.h>
#include<string.h>
//Question for Chronothon

using namespace std;
int CookiesShape(int input1)
{
int count=0;
int i,j;
int input=input1;
for( i=1;i<=input;i++)
{
for(j=1;j<=(2*i)-1;j++)
{

}
while(j<=input)
{
count++;
j++;
}
}
return count;
}
int main()
{
    int n;
    cout<<"Enter the number of n"<<endl;
    cin>>n;
    int y=CookiesShape(n);
    cout<<"No of Changes required is: "<<y;
}
