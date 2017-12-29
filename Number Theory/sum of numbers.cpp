#include<iostream>
using namespace std;
int main(){
 int n,m,i,j,count=0;
  cin>>n>>m;

  for(i=1;i<=n;i++){
   for(j=1;j<=m;j++){
     if(((i+j)%5)==0)
       count++;
   }
  }
   cout<<count;
}
