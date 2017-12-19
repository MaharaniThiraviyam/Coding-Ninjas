#include<iostream>
using namespace std;
int main(){
  long long  a,b,fact1=1,fact2=1,f,i;
  cin>>a>>b;

  for(i=1;i<=b;i++){
    if(i<=a)
    fact1=fact1*i;
    fact2=fact2*i;
  }
   cout<<fact1<<"  "<<fact2;
    //f=fact2/fact1;
   // cout<<f%10;

}
