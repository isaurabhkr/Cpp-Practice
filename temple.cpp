#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool pal(int a[],int size)
{
	int i=0;
	int flag=0;
	while(flag==0 && i<size){
		if(a[i]==a[size-i-1]){
			flag=0;
			i++;
		}

		else{
			flag=1;
		    }
	}
	if(flag==0)
		return true;
	else
		return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k,l;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int flag=0;
        k=n/2;
        l=k+1;
        if(arr[0]==1&&arr[n-1]==1&&pal(arr,n)&& n%2==1)
        {
                if(arr[k]==arr[l]+1)
                    flag=1;
        }

        if(flag==1)
           cout<<"yes"<<endl;
           else
            cout<<"no"<<endl;
    }
}
