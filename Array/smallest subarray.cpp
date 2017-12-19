#include<iostream>
using namespace std;
 int main()
 {
  int n,a[10],i,temp=0,count=0,num,j,add=0;
   cin>>n>>num;
    count=n;
    for(i=0;i<n;i++)
     cin>>a[i];
    for(i=0;i<n-1;i++)
    {
     for(j=i+1;j<n;j++)
     {
      if(a[i]>a[j])
       {
        temp=a[i];a[i]=a[j];a[j]=temp;
       }
     }
    }

   for(i=0;i<n;i++)
   {
   for(j=n-1;j>0;j--)
      {

    if(temp<num)
     {add+=a[i];temp++;}
    else if(temp<count)
      {count=temp;add=0;temp=0;}
       }
   }
  cout<<count;
 }
