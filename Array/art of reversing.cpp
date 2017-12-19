#include<iostream>
using namespace std;
int main()
{
 int a[10][10],n,m,i,j;
 cin>>n>>m;
 for(i=0;i<n;i++)
    for(j=0;j<m;j++)
     cin>>a[i][j];
  for(i=0;i<n;i++)
  {
    for(j=m-1;j>=0;j--)
     cout<<a[i][j]<<" ";
     cout<<"\n";
  }
}
