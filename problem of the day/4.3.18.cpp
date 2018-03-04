#include<iostream>
using namespace std;
int main(){
 int q,a,b,k,i,d,hn,count,j,flag;
  cin>>q;
   for(j=0;j<q;j++){
    cin>>a>>b>>k;
    for(i=a,count=0;(i<b&&count<k);i++){
     if(i<4)
        flag=1;
     else{
     hn=i/2;
      if(i%2!=0)
        hn++;

     for(d=2,flag=1;d<=hn;d++){
      if(i%d==0)
       flag=0;
        }
     }
     if(flag==1)
        count++;
    }

     if(count==k)
      cout<<--i<<"\n";
     else
      cout<<"-1 \n";
   }

   return 0;

}
