#include<iostream>
using namespace std;
int main(){
 int n,f1=1,f2=1,ans=1,i,flag=0;
 cin>>n;

 if(n==1)
    cout<<"true";
 else if(n>1){
 while(ans<=n){
 ans=f1+f2;
 f1=f2;
 f2=ans;
 if(ans==n)
    flag=1;
 }
 if(flag==1)
  cout<<"true";
 else
    cout<<"false";
}

}
