#include<iostream>
using namespace std;
int main(){
  int n,i,sum=0,product=1,choice;
  cin>>n>>choice;

  if(choice==1){
   for(i=1;i<=n;i++)
   sum+=i;
   cout<<sum;
  }
  else if(choice==2){
   for(i=1;i<=n;i++)
   product*=i;
   cout<<product;
  }
  else
   cout<<"-1";


}
