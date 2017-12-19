#include<iostream>
using namespace std;

 int main()
 {
  int a[10],temp,i,j,k,n,val;
   cin>>n;
   for(i=0;i<n;i++)
     cin>>a[i];
   for(i=0;i<n-1;i++)  //Ascending order
   {
        for(j=i+1;j<n;j++)
         {

           if(a[i]>a[j]) //swapping
           {
             temp=a[i];a[i]=a[j];a[j]=temp;
           }
         }
   }

         for(i=n/2,j=0;i<n;i++) //conversion
         {
          temp=a[i];a[i]=a[j];a[j]=temp;j++;
           for(k=0;k<n;k++)
           {
             if(a[k]==-(a[j-1]))
              {
                 temp=a[k];a[k]=a[j];a[j]=temp;break;
              }
           }
           j++;
         }

   for(i=0;i<n;i++)
    cout<<a[i]<<" ";
 }
