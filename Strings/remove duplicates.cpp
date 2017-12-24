#include<iostream>
using namespace std;
int main(){
 char input[100];int i,count=0,place,j,k;
 cin>>input;

  for(i=0;input[i]!='\0';i++){
     if(input[i]!=input[i+1]){
        k=place+count;
      for(j=place+1;input[k]!='\0';j++,k++)
        input[j]=input[k];
        count=0;
        i=place+1;
     }
     else if((input[i]==input[i+1])&&(count==0))
        place=i;
     else if(input[i]==input[i+1])
        count++;
}
cout<<input;
}
