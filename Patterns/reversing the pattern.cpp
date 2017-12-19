#include<iostream>
using namespace std;
int main()
{
 int i,prev=0,val=0,j,n;
 cin>>n;
 for(i=1;i<=n;i++)
 {
  if(i%2!=0)
   {
    val=prev;
     for(j=1;j<=i;j++)
       cout<<++val<<" ";
   }
  else
  {
    val=val+i+1;
    prev=val-1;
     for(j=1;j<=i;j++)
      cout<<--val<<" ";
  }
  cout<<"\n";
 }
}
