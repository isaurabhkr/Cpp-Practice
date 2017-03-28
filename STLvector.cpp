#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> v)
{
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" "<<endl;
}
void printbyiterator(vector<int> v)
{
    cout<<"Iterator"<<endl;
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<" "<<endl;
}
void bubble(vector<int> v)
{
    int i,j,counter=0;
    for(i=0;i<v.size();i++){
        for(j=1;j<v.size();j++)
    {
        if(v[j]>v[j+1])
        {
            swap(v[j],v[j+1]);
            counter++;
        }
    }}
    cout<<"After Sorting\n";
    print(v);
    cout<<"Number of Com\n"<<counter;
}
int main()
{
    vector<int> v;
    /*v[0] = 1;
    v[1] = 2;
    v[2] = 3;*/
    int n,i,d;
    cout<<"Enter the Values to be inserted"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
    cin>>d;
    v.push_back(d);
    }
    printbyiterator(v);
    bubble(v);
    //cout<<"Iterator"<<v.iterator<<endl;

}

