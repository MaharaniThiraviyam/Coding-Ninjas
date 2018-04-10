#include<bits/stdc++.h>

using namespace std;
int main() {

	string s;int n,i,j,temp;
   cin>>s;
   n=s.length();
   
   for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
     if(s[i]>s[j]){
      temp=s[i];
      s[i]=s[j];
      s[j]=temp;

     }
    }
   }
   cout<<s;
   return 0;
}
