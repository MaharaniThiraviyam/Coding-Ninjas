#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 int i,n,z,c,prev=-2,val;
  cin>>n;
   c=ceil(n/2);
    for(z=0;z<n;z++)
     {
        if((z==(c+1))&&(n%2==1))
         prev-=1;
       else if((z==c)&&(n%2==0))
         prev+=1;
        else if(z<=c)
         prev+=2;

       else
          prev-=2;
        val=prev*n;
        for(i=0;i<n;i++)
            cout<<++val<<" ";
            cout<<"\n";
     }
}
