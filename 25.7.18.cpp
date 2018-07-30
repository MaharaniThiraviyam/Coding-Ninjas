#include<iostream>
using namespace std;
 int main(){
  int num1,num2,sum=0,f1=0,f2=1,f3=0,i;

  cin>>num1>>num2;


    if(num1==2 || num2==2)
     sum+=1;

    for(i=3;i<=num2;i++){
     f3=f1+f2;

     if(i==num1)
      sum+=f3;
      f1=f2;
      f2=f3;

   }
   sum=f3-sum;

 cout<<sum;
 return 0;
 }
