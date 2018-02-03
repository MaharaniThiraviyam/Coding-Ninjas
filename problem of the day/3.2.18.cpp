#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s,t;int k,i,len=0,count=0,del=0,len2=0;
  cin>>s>>t>>k;
  len=s.length();
  len2=t.length();

   for(i=0;s[i]!='\0';i++){
     if(s[i]==t[i])
        count++;
    }
  del=len-count+1;
  if((k-del)>=(len2-count))
     cout<<"Yes";
  else
     cout<<"No";

    return 0;
}
