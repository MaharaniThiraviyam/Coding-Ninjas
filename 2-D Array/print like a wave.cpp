#include<iostream>
using namespace std;
int main()
{
  int a[10][10],row,col,z,i,j;
   cin>>row>>col;z=row-1;
  for(i=0;i<row;i++)
   for(j=0;j<col;j++)
     cin>>a[i][j];

  for(i=0;i<col;i++)
   {
    for(j=0;j<row;j++)
    {
      if(i%2==0)
       cout<<a[j][i]<<" ";
      else
      {cout<<a[z][i]<<" ";z--;}
    }
    z=row-1;
   }
}
