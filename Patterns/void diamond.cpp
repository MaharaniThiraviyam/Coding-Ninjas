#include<iostream>
using namespace std;
int main()
{
  int n=0,i,j,val=0,temp=0,mid;
  cin>>n;

   temp=(n/2)+1;val=temp;mid=val;
   for(i=1;i<=n;i++)
    {
      if((i!=1))
      {
        if(i<=mid)
       {val--;temp++;}
       else  {val++;temp--;}
      }

      for(j=1;j<=n;j++)
      {
        if((j<=val)||(j>=temp))
         cout<<"*";
         else
         cout<<" ";
        }
      cout<<"\n";
    }

}
