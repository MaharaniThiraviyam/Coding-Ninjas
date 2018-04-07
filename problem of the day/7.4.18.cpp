#include<iostream>
using namespace std;
 int main(){
  int n,key,i,j,sum=0,big=0;
   cin>>n>>key;

   int arr[n];
   for(i=0;i<n;i++)
    cin>>arr[i];

   for(i=0;i<n;i++){
     for(j=0;j<n;j++){
        if(i!=j){
      if(sum+arr[j]<=key)
       sum+=arr[j];
     }

     }
      if(sum>big)
        big=sum;

   }
   cout<<sum;
   return 0;

 }
