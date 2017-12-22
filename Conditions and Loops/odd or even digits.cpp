#include<iostream>
using namespace std;
int main(){
 int n,i=1,even=0,odd=0;
 cin>>n;
  for(;n>0;n=n/10,i++){
     if((i%2)!=0)
     odd=odd+(n%10);
     else
     even=even+(n%10);

  }
  cout<<even<<" "<<odd;
}
