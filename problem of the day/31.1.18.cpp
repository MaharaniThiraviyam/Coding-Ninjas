#include<iostream>
using namespace std;
int main(){
 int n,i,count=0,len=0,total=0;string s;
  cin>>s>>n;
  for(i=0;s[i]!='\0';i++){
   if(s[i]=='a')
      count++;
   }
   len=s.length();
   total=((n/len)*count)+(n%len);
   cout<<"\ntotal="<<total;
}
