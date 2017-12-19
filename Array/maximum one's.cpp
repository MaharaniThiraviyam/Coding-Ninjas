#include<iostream>
using namespace std;
int main()
 {
   int i,j,n,m,a[10][10],index=-1,count,big=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
     for(j=0;j<m;j++)
       cin>>a[i][j];
    for(i=0;i<n;i++)
    {
         count=0;
     for(j=0;j<m;j++)
     {
       if(a[i][j]==1)
          count++;
     }
     if(count>big)
     {big=count;index=i;}
    }
  cout<<index;
 }
