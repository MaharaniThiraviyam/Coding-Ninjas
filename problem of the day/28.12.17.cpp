#include<iostream>
using namespace std;
 int main(){
   string s;int count=0,max=0,i,flag=0;
   cin>>s;
   for(i=0;s[i]!='\0';i++){
    if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')){
      count++;flag=count;
   }
    else
        count=0;
    if(flag>max)
       max=flag;
   }
   cout<<max;
 }
