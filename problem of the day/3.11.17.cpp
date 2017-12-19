#include<iostream>
using namespace std;
int main()
{
 int a[10],n,i,flag=0,check=0;
  cin>>n;
   for(i=0;i<n;i++)
     cin>>a[i];
     check=a[1]/a[0];
   for(i=1;i<n-1;i++)
     {

      if((a[i+1]/a[i])!=check)
      {
       flag=1;break;
      }
     }
      if(flag==0)
      cout<<"true";
      else
      cout<<"false";
}
