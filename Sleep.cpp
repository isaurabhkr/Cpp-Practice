#include<iostream>
#include<set>
#include<algorithm>

using namespace std;
set <int> numbers;

int SleepCount(int n)
{
int last=0,d1,d;
numbers.clear();
while (numbers.size() < 10)
{
last += n;
d1 = last;
while (d1)
{
d=d1%10;
numbers.insert(d);
d1 =d1/10;
}
}

return last;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    if(n==0)
    {
    cout<<"INSOMIA"<<endl;
    return 0;
    }
    cout<<"Last Number "<<SleepCount(n)<<endl;
    }

}
