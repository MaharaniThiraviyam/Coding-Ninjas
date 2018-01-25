#include<iostream>
using namespace std;
int main(){
 int a[20],n,i,flag=0,temp,swap1;
  cin>>n;
  for(i=0;i<n;i++)
    cin>>a[i];
 for(i=0;i<n;i++){

   if(a[i]==1 && a[i+1]==0){
    a[i+1]=1;a[temp]=0;
   }
   if(a[i]==1 && flag==0){
    temp=i;flag=1;
 }
  }
  for(i=0;i<n;i++)
    cout<<a[i]<<" ";

 return 0;
}
