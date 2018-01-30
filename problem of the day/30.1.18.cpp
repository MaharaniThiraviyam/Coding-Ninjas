#include <cmath>
#include<string.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  string s1,s2;int n1,n2,i,j,count=0;
   cin>>s1>>s2;

   n1=s1.length();
   n2=s2.length();
   for(i=0;s1[i]!='\0';i++){
     for(j=0;s2[j]!='\0';j++){
       if(s1[i]==s2[j]){
         s2.erase(j,1);
         count+=2;break;
       }
   }
   }
   cout<<(n1+n2-count);
    return 0;
}
