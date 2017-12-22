#include<iostream>
using namespace std;
int main(){
 int n,i,j;
 cin>>n;
 cout<<"1\n";
 for(i=1;i<=n;i++) {
   cout<<i;
  for(j=2;j<=i;j++)
   cout<<"0";
   cout<<i<<"\n";

 }

}
