#include<iostream>
using namespace std;

int main()
{
  int n,i,j,c=0,check,val=0,m,num;
   cin>>n;
   c=n/2;m=c;val=c+1;
   for(i=0;i<n;i++)
    {
        num=0;
     for(j=0;j<val;j++)
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
