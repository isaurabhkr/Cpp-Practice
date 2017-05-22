#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool IsDot(char c)
{
    switch(c)
    {
    case '.':
        return true;
    default:
        return false;
    }
}
bool onlyDot(string s)
{
        string::iterator it;
        int flag=0;
        for ( it=s.begin(); it!=s.end(); ++it)
        {

            if(*it=='.')
               flag=1;
            else
            {
                flag=0;
                return false;
            }
        }
            if(flag==1)
            return true;
            else
            {
            return false;
            }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        string str1(arr);
        int flag=0;
        int flag2=0;
        if(onlyDot(str1))
        {
        flag2=1;
        }
        string::iterator it;
        str1.erase(std::remove_if(str1.begin(), str1.end(), &IsDot), str1.end());
        for ( it=str1.begin(); it!=str1.end(); ++it)
        {
            if(*it=='H')
            {
                it=it+1;
                if(*it=='T')
                    flag=1;
                else
                {
                    flag=0;
                    break;
                }
            }
        }

cout<<"flag "<<flag<<endl;
cout<<"flag2 "<<flag2<<endl;
if(flag2==1)
{
cout<<"Valid"<<endl;
}
else if(flag==0)
    cout<<"Invalid"<<endl;
    else
    cout<<"Valid"<<endl;
}
}

