#include<iostream>
using namespace std;
int main(){
 char s[50];
 int i,flag=0,flag1=0;
 cin>>s;
 for(i=0;s[i]!='\0';i++){
         if((s[i]=='f')&&(s[i+1]=='t')&&(s[i+2]=='p')){
           flag=1;
           cout<<s[i]<<s[i+1]<<s[i+2]<<"://";i+=3;
         }
        if((s[i]=='h')&&(s[i+1]=='t')&&(s[i+2]=='t')&&(s[i+3]=='p')&&(flag==0)){
          cout<<s[i]<<s[i+1]<<s[i+2]<<s[i+3]<<"://";i+=4;}
         if((s[i+1]=='r')&&(s[i+2]=='u')&&(flag1==0)){
            cout<<s[i]<<"."<<s[i+1]<<s[i+2]<<"/";i+=2;flag1=1;}
         else
            cout<<s[i];
 }
}
