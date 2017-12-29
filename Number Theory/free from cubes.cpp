#include<iostream>
using namespace std;
int main(){
  int n,i,flag=0,pos=1,cube=1,prev;
   cin>>n;
   for(i=2;cube<n;i++){
       cube=i*i*i;
       if((n%cube)==0)
          flag=1;
  }
   if(flag==0){
   cout<<pos;
   }
   else
      cout<<"Not Cube Free";
}
