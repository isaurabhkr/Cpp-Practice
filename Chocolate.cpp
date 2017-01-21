#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
	int n,m;
	int a[105];
    int max;
    int min;
	cin>>t;
	int i;
	while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>m;
        sort(a,a+n);
        max=a[m-1];
        min=a[0];
        cout<<max-min;
        cout<<endl;
        }
    }

