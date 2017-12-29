#include<iostream>
using namespace std;
int main(){
 int a[10],n,i,j,count,*p;
  cin>>n;
  for(i=0;i<n;i++)
   cin>>a[i];
 p=a;
  for(i=0;i<n;i++){
    for(j=2,count=2;j<=*(p+i)/2;j++){
      if((*(p+i)%j)==0)
        count++;
    }
    if(count==3)
     cout<<"YES \n";
    else
     cout<<"NO \n";
  }
}
