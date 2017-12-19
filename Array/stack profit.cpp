#include<iostream>
using namespace std;
 int main()
 {
   int a[10],i,big=0,small,n;
    cin>>n;
     for(i=0;i<n;i++)
       cin>>a[i];
       small=a[0];
     for(i=0;i<n;i++)
      {
         if(a[i]>big)
          big=a[i];

          if(a[i]<small)
           small=a[i];

      }
         cout<<big-small;

 }
