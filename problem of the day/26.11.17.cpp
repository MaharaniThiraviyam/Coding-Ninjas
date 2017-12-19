#include<iostream>
using namespace std;
int main(){
 int a[10],n,i,mul,max=1,j;
 cin>>n;

 for(i=0;i<n;i++)
  cin>>a[i];

 for(i=0;i<n;i++){
    mul=1;
  for(j=0;j<n;j++){
    if((i!=j)&&(a[j]!=0))
      mul*=a[j];

  }
   if(mul>max)
    max=mul;
 }
 cout<<"max="<<max;
}
