#include<iostream>
using namespace std;
int main()
{
 int a[10][10],count=0,i,j,n,m;
 cin>>n>>m;
  for(i=0;i<n;i++)
   for(j=0;j<m;j++)
     cin>>a[i][j];

  for(i=0;i<n;i++)
   {
     for(j=0;j<m;j++)
     {
       if(a[i][j]==0)
       {
         if((a[i-1][j]==1)&&(i!=-1))
         count++;
         if((a[i+1][j]==1)&&(i!=n))
          count++;
         if((a[i][j-1]==1)&&(j!=-1))
          count++;
         if((a[i][j+1]==1)&&(j!=m))
          count++;
       }
     }
   }
     cout<<count;
}
