#include<iostream>
using namespace std;
int main(){
  int n,i,flag=0,j;
  cin>>n;
  for(i=2;i<=n;i++){
   if(i<4)
    cout<<i<<"\n";
   else{
    for(j=2,flag=0;j<=(i/2);j++){
        if((i%j)==0)
            flag=1;
    }
      if(flag==0)
        cout<<i<<"\n";

   }
  }
}
