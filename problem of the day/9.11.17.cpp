#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 int x,n,val=0,i=0;
  cin>>x>>n;
   do
    i++;
   while((val+=(pow(x,i)))<n);

     cout<<--i;
}
