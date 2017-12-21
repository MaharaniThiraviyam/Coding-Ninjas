#include<iostream>
using namespace std;
int main(){
 int s,e,w,i;
 cin>>s>>e>>w;
 for(i=0;i<=e;i=i+w)
 cout<<i<<"\t"<<(((i-32)*5)/9)<<"\n";


}
