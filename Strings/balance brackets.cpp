#include<iostream>
using namespace std;
int main(){
 string s;int i,count=0,size=0;
  cin>>s;

  for(i=0;s[i]!='\0';i++){
   if(s[i]=='(')
    count++;
   else
    { count--;size++;}
  }
  if(count==0)
   cout<<"yes";
   else
   cout<<"no";
   cout<<size;

}
