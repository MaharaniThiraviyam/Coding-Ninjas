#include<iostream>
using namespace std;
int main()
{
 int num=0,n,val=0,space=0,i,j;
 cin>>n;
  val=n;space=n+1;
   for(i=0;i<=n;i++)
    {
      ++val;
       for(j=1;j<=val;j++)
        {
          if(j<space)
           cout<<" ";
          else if(j<(n+1))
           cout<<num--;
           else
           cout<<num++;
        }
        cout<<"\n";space--;
    }

}
