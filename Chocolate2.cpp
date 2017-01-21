#include<iostream>
using namespace std;
void Bubblesortimproved(int a[],int n){int temp;
for(int i=0;i< n-1;i++){
for(int j=0;j< n-i-1;j++){
if(a[j]>a[j+1]){
//swap elements
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;}}}}
int main(){
int t=0;
cin>>t;
while(t>0){
int array[1000];
int m,n;
cin>>n;
for(int j=0;j<n;j++)
cin>>array[j];
cin>>m;
Bubblesortimproved(array,n);
int b[1000];
int temp=0,count=0;
for(int i=0;i<n;i++){
if((i+m-1< n )){
temp=array[i+m-1]-array[i];
b[count]=temp;
count++;}
else
break;}
Bubblesortimproved(b,count);
cout<<b[0];
cout<<"\n";
t--;}}

