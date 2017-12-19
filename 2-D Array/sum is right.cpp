#include<iostream>
using namespace std;

int main()
{
 int n,m,a[10][10],i,j,temp,sum;
 cin>>n>>m;
for(i=0;i<n;i++)
    for(j=0;j<m;j++)
     cin>>a[i][j];
  for(i=0;i<n;i++)
  {
      sum=0;
     for(j=m-1;j>=0;j--)
     {
       temp=a[i][j];
       a[i][j]=sum;
       sum+=temp;
     }
  }
   for(i=0;i<n;i++)
   {
     for(j=0;j<m;j++)
     cout<<a[i][j]<<" ";
   }
}
