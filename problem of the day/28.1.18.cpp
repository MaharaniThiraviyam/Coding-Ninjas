#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     char s[100000];int i,count=0,t,j;
 cin>>t;
 for(j=0;j<t;j++){
  cin>>s;
  for(i=0,count=0;s[i]!='\0';i++){
    if((s[i]=='A' && s[i+1]!='B')||(s[i]=='B' && s[i+1]!='A'))
     count++;
  }
 cout<<count-1<<"\n";
}
    return 0;
}
