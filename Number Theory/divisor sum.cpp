#include<iostream>
using namespace std;
int main(){

 int n,i,sum=1;
 cin>>n;
 for(i=2;i<=(n/2);i++){
 if((n%i)==0)
    sum+=i;
    }
    cout<<sum;

}
