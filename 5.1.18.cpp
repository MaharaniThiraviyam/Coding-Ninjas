#include<iostream>
using namespace std;
int main(){
  int n,m,sum,i,a[10][10],j;
   cin>>n>>m;
   for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      cin>>a[i][j];
   for(i=0;i<n;i++){
    for(j=m-1,sum=0;j>=0;j--){
       sum+=a[i][j];
       a[i][j]=sum-a[i][j];
       }
   }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
             cout<<" "<<a[i][j];
        cout<<"\n";
    }
}
