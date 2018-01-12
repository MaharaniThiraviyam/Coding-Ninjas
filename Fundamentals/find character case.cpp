#include<iostream>
using namespace std;
int main(){
 char ch;
 cin>>ch;
 if((ch>64)&&(ch<91))
  cout<<"1";
else if((ch>96)&&(ch<123))
  cout<<"0";
  else
   cout<<"-1";

}
