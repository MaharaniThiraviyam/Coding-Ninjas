#include<iostream>
using namespace std;
int main(){
  char c;int val;
  cin>>c;
  val=(int)c;
   if((val>96)&&(val<123))
   cout<<"0";
   else if((val>64)&&(val<91))
   cout<<"1";
   else
    cout<<"-1";
}
