#include<iostream>
using namespace std;
int main(){
 int n,i,j,val=0;;
 cin>>n;
val=n;
 for(i=0;i<n;i++,val--){


 for(j=1;j<=n+i;j++){

  if(j>=val)
    cout<<"*";
  else
    cout<<" ";
 }
 cout<<"\n";

 }

}
