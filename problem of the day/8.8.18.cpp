#include<iostream>
using namespace std;
 int main(){
  string s,t;int i,j,count=0,k;char temp;
   cin>>s>>t>>k;

   for(i=0;i<s.size();i++){

    if(s[i]!=t[i]){

     for(j=i+1;j<s.size();j++){

      if(s[i]==t[j]){
            cout<<"\n i="<<i;
       temp=t[i];
       t[i]=t[j];
       t[j]=temp;
       count++;
       break;
      }

     }

    }

   }

   cout<<"\n count="<<count;
   if(count==k)
    cout<<"yes";
   else
    cout<<"no";

    cout<<"\n str="<<t;
    return 0;
 }
