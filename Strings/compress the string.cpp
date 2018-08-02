#include<iostream>
using namespace std;
 int main(){
  char input[100];int i,count=0,z=0,index;
   cin>>input;

   for(i=0;input[i]!='\0';i++){

     if(input[i]==input[i+1])
        count++;
     else if(input[i]!=input[i+1] && count>0){
        input[z]=input[i];
        input[++z]=48+count+1;
        z++;
         count=0;
   }

     else if(input[i]!=input[i+1]){
        index=i;
        input[z]=input[i];
     z++;
     }
   }

   for(;input[z]!='\0';z++)
     input[z]=' ';
    cout<<input;
  return 0;
 }
