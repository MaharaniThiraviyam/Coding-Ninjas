#include<iostream>
using namespace std;
int main(){
   int n,a[10],i,j;
   cin>>n;

   for(i=0;n>0;i++,n=n/2)
    a[i]=n%2;
     a[i]=n;

     for(j=i-1;j>=0;j--)
       cout<<a[j];

}
