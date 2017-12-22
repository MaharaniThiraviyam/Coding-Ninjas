#include<iostream>
using namespace std;
int main(){
 int x,i,count=1;
 cin>>x;
  for(i=1;count<=x;i++){
  if((((3*i)+2)%4)!=0){
  cout<<(3*i)+2<<" ";
  count++;

  }
  }


}
