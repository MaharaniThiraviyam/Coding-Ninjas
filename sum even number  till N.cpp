#include<iostream>
using namespace std;
int main(){
 int n,i,sum=0;
 cin>>n;
 for(i=2;i<=n;i=i+2)
    sum+=i;
 cout<<sum;

}
