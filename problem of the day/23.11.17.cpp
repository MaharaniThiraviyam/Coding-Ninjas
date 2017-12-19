#include<iostream>
using namespace std;
int main()
{
 int k,l,r,i,div=0,count;
 cin>>k>>l>>r;
 for(;l<=r;l++)
 {
    for(i=2,count=2;i<=l/2;i++)
      {
       if((l%i)==0)
         count++;
      }
      if(k==count)
         div++;
 }
 cout<<div;
}
