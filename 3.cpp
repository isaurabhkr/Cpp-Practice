//Program by Saurabh Kumar
//b415053
//Lab 4
#include <iostream>
#include <math.h>
using namespace std;
int binarysearch(int Py[],int f,int l,float key)
{
    int pos;
    while((Py[f]<key && key<Py[l]) || (Py[f]>key && key>Py[l]))
    {
        int mid=(f+l)/2;
        if(key==Py[mid])
            return mid;
        if(key>Py[mid])
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
  float slope1,intercept1;
  int Px=5;
  int Py[]={1,2,3,4,5,6,7,8,9,10,11};
  float D1 =6, D2=4, S1=3, S2=9;
  float diffx,diffy;
  slope1 = diffy / diffx;
   intercept1 = D2 - slope1 * D1;
   float key =S2+slope1*(Px-S1);
   int p1=binarysearch(Py,0,10,key);
    diffx = S1 - D1;
    diffy = S2 - D2;
    cout<<"The Destination has coordinates "<<D1<<",  "<<D2<<endl;
    cout<<"The Source has coordinates "<<S1<<", "<<S2<<endl;
    cout<<"The x-coordinate of the Vertical line L is: "<<Px<<endl;
    cout<<"The y-coordinate of the Vertical Line L are: ";
    for(int i=0;i<11;i++)
    {
        cout<<" "<<Py[i];
    }
    cout<<endl;
   //This is O(logn)
    int p2;
    float dis;
    if(key<=Py[0])
    {
        float dis=sqrt((S1-Px)*(S1-Px)+(Py[0]-S2)*(Py[0]-S2))+sqrt((D1-Px)*(D1-Px)+(Py[0]-D2)*(Py[0]-D2));
        cout<<"Shortest distance is :"<<dis<<endl;
        return 0;
    }
    if(key>=Py[10])
    {
        float dis=sqrt((S1-Px)*(S1-Px)+(Py[10]-S2)*(Py[10]-S2))+sqrt((D1-Px)*(D1-Px)+(Py[10]-D2)*(Py[10]-D2));
        cout<<"Shortest distance is "<<dis<<endl;
        return 0;
    }
    if(Py[p1]==key)
    {
        float dis=sqrt((S1-Px)*(S1-Px)+(Py[p1]-S2)*(Py[p1]-S2))+sqrt((D1-Px)*(D1-Px)+(Py[p1]-D2)*(Py[p1]-D2));
        cout<<"Shortest distance is "<<dis<<endl;
        return 0;
    }
    else if(Py[p1]>key)
    {
        p2=p1-1;
        float dis1=sqrt((S1-Px)*(S1-Px)+(Py[p1]-S2)*(Py[p1]-S2))+sqrt((D1-Px)*(D1-Px)+(Py[p1]-D2)*(Py[p1]-D2));
        float dis2=sqrt((S1-Px)*(S1-Px)+(Py[p2]-S2)*(Py[p2]-S2))+sqrt((D1-Px)*(D1-Px)+(Py[p2]-D2)*(Py[p2]-D2));
        if(dis1<=dis2)
            dis=dis1;
        else
         dis=dis2;
        cout<<"Shortest distance is "<<dis<<endl;
    }
    else
    {
        p2=p1+1;
        float dis1=sqrt((S1-Px)*(S1-Px)+(Py[p1]-S2)*(Py[p1]-S2))+sqrt((D1-Px)*(D1-Px)+(Py[p1]-D2)*(Py[p1]-D2));
        float dis2=sqrt((S1-Px)*(S1-Px)+(Py[p2]-S2)*(Py[p2]-S2))+sqrt((D1-Px)*(D1-Px)+(Py[p2]-D2)*(Py[p2]-D2));
        if(dis1<=dis2) dis=dis1;
        else dis=dis2;
        cout<<"Shortest distance is "<<dis<<endl;

    }
    return 0;
}

