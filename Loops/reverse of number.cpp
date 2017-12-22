#include<iostream>
using namespace std;
int main(){
 int n,sum=0,i;
 cin>>n;
 for(;n>0;n=n/10)
  sum=(sum*10)+(n%10);
  cout<<sum;

}
