#include<iostream>
using namespace std;
int main(){
 char s[100];
  int n,i,count=0;
  cin>>n;
   cin>>s;
  for(i=0;i<=n-2;i++)
  if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0'){
  s[i+2]='1';count++;
 }
 cout<<count;
}
