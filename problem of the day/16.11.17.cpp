#include<iostream>
using namespace std;
int main()
{
  int a[10],n,arr[10],i,digit,flag,j;
   cin>>n;
   for(i=0;i<n;i++)
    cin>>a[i];
  for(i=0;i<n;i++){
   for(j=0;j<10;j++)
    arr[j]=0;

     n=a[i];flag=0;
  for(;n>0;n/=10){
    digit=n%10;
    arr[digit]++;
    if(arr[digit]>1){
     flag=1;break;
     }
 }
 if(flag==0){
        cout<<a[i];break;
  }
 }
}
