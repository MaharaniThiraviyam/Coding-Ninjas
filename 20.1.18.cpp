#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  string s;int i,k,n,p,z,count;char c;
  cin>>k>>s>>n;
  for(z=0;z<n;z++){
        cin>>p>>c;
   for(i=0,count=0;s[i]!='\0';i++){
       if(s[i]==c)
        count++;
       if(s[i]==c && count==p)
         s.erase(i,1);
    }
  }
        cout<<s;
 return 0;
}
