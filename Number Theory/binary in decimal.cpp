#include<iostream>
#include<math.h>
using namespace std;
int main(){
 int n,count=1,i,prev=0,next=0,sum=0,arr[15],z=0;
 cin>>n;
  for(i=10;i<=n;i=i*10){
    count*=2;prev=i;
}
 next=i;
 for(j=prev;j>0;j=j/10,z++)
   arr[z]=j%2;



  for

 cout<<count<<"  "<<prev<<"  "<<next;
}
