#include<iostream>
using namespace std;
int main(){

 int n,i,num,sum;
 cin>>n;
 for(i=1;i<=n;i++){
    num=i;
    for(sum=0;num>0;num=num/10)
        sum=(sum*10)+(num%10);
    if(i==sum)
        cout<<i<<"\n";

 }
}
