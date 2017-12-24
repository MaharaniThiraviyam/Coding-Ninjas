#include<iostream>
#include<string>
using namespace std;
int main(){
 string s1,s2,s3;
 int i,j,flag1=0,flag2=0,count=0,count1=0,count2=0;
  cin>>s1>>s2>>s3;

  for(i=0;s3[i]!='\0';i++);
  count2=i;

 for(i=0;s1[i]!='\0';i++){
    for(j=0;s3[j]!='\0';j++){
    if(s1[i]==s3[j]){
      count++;break;}
  }
}

if(i==count)
flag1=1;
for(i=0;s2[i]!='\0';i++){
    for(j=0;s3[j]!='\0';j++){
    if(s2[i]==s3[j]){
      count1++;break;}
  }
}

if(i==count1)
    flag2=1;
if(((count+count1)==count2)&&(flag1==1)&&(flag2==1))
  cout<<"yes";
  else
    cout<<"no";

}
