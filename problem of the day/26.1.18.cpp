#include<iostream>
using namespace std;
int main(){
int n=0,num,i,j,val=0,temp=0;
  cin>>n;
   temp=(2*n)+1;
   for(i=1;i<=((2*n)-1);i++)
    {
        num=n+1;
      if(i<=n)
       {val++;temp--;}
       else
      {temp++;val--;}

      for(j=1;j<=((2*n)-1);j++)
      {
        if(j<=val)
         num--;
        else if(j>=temp)
         num++;
         cout<<num;
        }
      cout<<"\n";
    }
    }
