#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdlib.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int length=0,m,n,i,j;
  string s;
  cin>>s;
   length=s.length();
   n=floor(sqrt(length));
   m=ceil(sqrt(length));
    for(i=0;i<m;i++){
     for(j=i;j<length;j=j+m){
          cout<<s[j];
    }
     cout<<" ";
    }

  return 0;

}
