#include<iostream>
using namespace std;
int main(){
 int n,i,j;char dis='A';
 cin>>n;
 for(i=1;i<=n;i++,dis++){
 for(j=1;j<=i;j++)
  cout<<dis;
  cout<<"\n";
 }

}
