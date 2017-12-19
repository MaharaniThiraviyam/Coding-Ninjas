#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
 int a[10],n,i,max,count,j,sum;
 cin>>max>>n;
 for(i=0;i<n;i++)
 cin>>a[i];

 for(i=0;i<n;i++){
  count=0;sum=0;
   for(j=i+1;j<n;j++){
       if((a[j]-a[i])<max)
         count++;

    }

   for(j=i-1;j>=0;j--){
        if(abs(a[i]-a[j])<max)
           count++;

    }
    cout<<count<<" ";
 }
}
