#include<iostream>
using namespace std;
int main(){
  int n,k,i,count=1,flag=0,start=1;
  cin>>n>>k;

 x:for(i=start;i<=n;i=i+2,count++){
     if(count==k){
      cout<<i;flag++;
     }
 }
 if(flag==0){
    start=2; goto x;
  }

}
