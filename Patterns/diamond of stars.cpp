#include<iostream>
using namespace std;
int main()
{
  int n,i,j,c=0,check,val=0,m;
   cin>>n;
   c=n/2;m=c;val=c+1;
   for(i=0;i<n;i++)
    {
     for(j=0;j<val;j++)
     {
       if(j<m)
        cout<<" ";
       else
         cout<<"*";
     }
      if(i<c)
        {m--;val++;}
      else
        {m++;val--;}
     cout<<"\n";
    }
}
