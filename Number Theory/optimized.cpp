#include<iostream>
using namespace std;
int main(){
  int n,k,i=1,count=1,count1,j=2;
  cin>>n>>k;

  count1=(n/2)+1;//Find half the given number
  if((n%2)!=0)
     count1++;

 for(;i<=n || j<=n;i=i+2,j=j+2,count++,count1++){
      if(count==k)
      cout<<i;
      else if(count1==k)
       cout<<j;
 }
}
