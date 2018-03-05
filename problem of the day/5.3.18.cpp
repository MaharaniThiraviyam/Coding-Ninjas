#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,j,a[26],ch,count,ascii,num,z;string s;
  cin>>n;
   for(i=0;i<n;i++){
    cin>>s;
    for(j=0;j<26;j++)
     a[j]=0;

     //do the process
    for(j=0,count=0;s[j]!='\0';j++){
     ascii=s[j];
     num=ascii%97;

      if(a[num]==0){
       a[num]=a[num]+1;
       count++;
     }

    }
        cout<<count<<"\n";
   }
    return 0;
}
