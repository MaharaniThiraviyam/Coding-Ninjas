#include<iostream>
using namespace std;
int main(){
 int n,f1=1,f2=1,ans=1,i;
 cin>>n;


 if(n>1){
 for(i=3;i<=n;i++){
 ans=f1+f2;
 f1=f2;
 f2=ans;
 }
 }
 cout<<ans;

}
