#include<iostream>
using namespace std;
int main()
{
 int a[10][10],i,j,n,m,k;
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
        for(k=0;k<n;k++)
         a[k][j]=0;
        for(k=0;k<m;k++)
         a[i][k]=0;
         break;
       }
     }
   }
 for(i=0;i<n;i++)
 {

     for(j=0;j<m;j++)
        cout<<a[i][j]<<" ";
     cout<<"\n";
 }
}
