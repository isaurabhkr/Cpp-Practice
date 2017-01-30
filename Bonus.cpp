#include<iostream>
#include<cmath>
using namespace std;
int binary_search(int arr[],int f,int l,double key)
{
    int pos;
    while((arr[f]<key && key<arr[l]) || (arr[f]>key && key>arr[l]))
    {
        int mid=(f+l)/2;
        if(key==arr[mid])
            return mid;
        if(key>arr[mid])
        {
            l=mid+1;
            pos=l;
        }
        else
        {
            f=mid-1;
            pos=f;
        }
    }
    return pos;
}
int main()
{
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    int x;
    cout<<"Eneter the x-coordinate of vertical line ";
    cin>>x;
    int arr[n];
    cout<<"Enter the y-coordinates of vertical line "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int sx,sy,dx,dy;
    cout<<"Enter the source coordinates ";
    cin>>sx>>sy;
    cout<<"Enter the destination coordinates ";
    cin>>dx>>dy;
    double key=(sy+dy)/2;
    int p1=binary_search(arr,0,n-1,key);
    int p2;
    double dis;
    if(arr[p1]==key)
    {
        double dis=sqrt((sx-x)*(sx-x)+(arr[p1]-sy)*(arr[p1]-sy))+sqrt((dx-x)*(dx-x)+(arr[p1]-dy)*(arr[p1]-dy));
        cout<<"Shortest distance is "<<dis<<endl;
    }
    else if(arr[p1]>key)
    {
        p2=p1-2;
        double dis1=sqrt((sx-x)*(sx-x)+(arr[p1]-sy)*(arr[p1]-sy))+sqrt((dx-x)*(dx-x)+(arr[p1]-dy)*(arr[p1]-dy));
        double dis2=sqrt((sx-x)*(sx-x)+(arr[p2]-sy)*(arr[p2]-sy))+sqrt((dx-x)*(dx-x)+(arr[p2]-dy)*(arr[p2]-dy));
        if(dis1<=dis2) dis=dis1;
        else dis=dis2;
        cout<<"Shortest distance is "<<dis<<endl;
    }
    else
    {
        p2=p1+2;
        double dis1=sqrt((sx-x)*(sx-x)+(arr[p1]-sy)*(arr[p1]-sy))+sqrt((dx-x)*(dx-x)+(arr[p1]-dy)*(arr[p1]-dy));
        double dis2=sqrt((sx-x)*(sx-x)+(arr[p2]-sy)*(arr[p2]-sy))+sqrt((dx-x)*(dx-x)+(arr[p2]-dy)*(arr[p2]-dy));
        if(dis1<=dis2) dis=dis1;
        else dis=dis2;
        cout<<"Shortest distance is "<<dis<<endl;
    }
    return 0;
}
