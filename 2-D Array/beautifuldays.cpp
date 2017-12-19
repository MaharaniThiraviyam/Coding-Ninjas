#include<iostream>
using namespace std;

int main()
{
  int i,j,k,count1=0,reverse1=0,z,ans,n;
  cin>>i>>j>>k;
  for(z=i;z<=j;z++)
   {
    n=z;
    while(n != 0)
    {
        reverse1= reverse1*10 + (n%10);
        n/= 10;
    }
    ans=(z-reverse1)%k;
    if(ans==0)
    count1++;
    reverse1=0;


   }
   cout<<count1;
}
