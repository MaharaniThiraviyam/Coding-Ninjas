#include<iostream>
using namespace std;
int main(){
  int n,i,j,m,z;
   cin>>n;
   for(i=1,z=((2*n)-1),m=0;i<(2*n);i++,z--){
        if(i<n+1)
          m++;
        else
          m--;
     for(j=1;j<(2*n);j++){
       if(i==j||j==z)
        cout<<m;
       else
        cout<<" ";
     }
     cout<<"\n";
   }
}
