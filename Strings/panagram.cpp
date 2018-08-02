#include<iostream>
using namespace std;
 int main(){
   string str;int number[26]={0},n,i,index,flag=0;
   cin>>n>>str;

   for(i=0;i<n;i++){
     if(str[i]>96 && str[i]<123)
       index=str[i]-97;
     else if(str[i]>64 && str[i]<92)
      index=str[i]-65;

      number[index]++;
 }

 for(i=0;i<26;i++){
   if(arr[i]==0)
     flag=0;
 }

 if(flag==1)
  cout<<"YES";
 else
  cout<<"NO";
  return 0;
 }
