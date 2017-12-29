#include<iostream>
using namespace std;
int main(){
   int n,i,j,count=0;
   cin>>n;

   for(i=0;n>0;i++,n=n/2){
    if((n%2)==1)
        count++;
   }
     cout<<count;




}
