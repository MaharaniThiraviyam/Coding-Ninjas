#include<iostream>
using namespace std;
int main(){
 string s;int flag=0,flag1=0,i;
 cin>>s;
  for(i=0;s[i]!='\0';i++){
    if((s[i]=='A')&&(s[i+1]=='B')){
        flag=1;++i;
   }
    else if((s[i]=='B')&&(s[i+1]=='A')){
       flag1=1;++i;
    }
}
 if((flag==1)&&(flag1==1))
     cout<<"yes";
 else
     cout<<"no";
 }
