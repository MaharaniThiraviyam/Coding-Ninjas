#include<iostream>
using namespace std;

int main()
{
  int n,i,j,c=0,check,val=0,m,num;
   cin>>n;

   c=n/2;
   if(n%2==0)
    c++;
   m=c;val=c+1;
   for(i=1;i<=n;i++)
    {
        num=0;
     for(j=1;j<val;j++)
     {
       if(j<m)
        cout<<" ";
       else
         cout<<++num;
     }
      if(i<c)
        {m--;val++;}
      else
        {m++;val--;}
     cout<<"\n";
    }
}
