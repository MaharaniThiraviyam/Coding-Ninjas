#include<iostream>
#include<math.h>
using namespace std;
int main(){
 int n,sum=0,i;
  cin>>n;
  for(i=0;n>0;n=n/10,i++)
    sum=sum+((n%2)*pow(2,i));
    cout<<sum;

}
