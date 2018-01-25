#include<iostream>
using namespace std;
int main(){
  int n,i,j,z;
   cin>>n;
    for(i=0,z=1;i<n;i++){
     for(j=0;j<=i;j++)
       cout<<z++;

         z=z-i;
       cout<<"\n";
    }
}
