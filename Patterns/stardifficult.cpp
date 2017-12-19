#include<iostream>
using namespace std;
 int main(){
  int n,i,j,m,val,count=1;
   cin>>n;
   val=n;m=n-2;
   for(i=1;i<=((2*n)-1);i++){

      for(j=1;j<(m+count);j++){

       if(j<m)
         cout<<" ";
        else
          cout<<val;
        }
        cout<<"\n";
     if((i<n)&&((i%2)!=0))
           m--;
     else if(i==m)
           m=2;
     else if((i>n)&&((i%2)==0))
           m++;

      if(i<n){
        val--;count++;
      }
      else{
        val++;count--;
      }
   }

 }
