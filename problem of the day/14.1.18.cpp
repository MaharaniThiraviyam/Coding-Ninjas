#include<iostream>
using namespace std;
int main(){
 int n,m,lcm1=0,lcm2=0,a[10][10],i,j,n1,n2,n3;
 cin>>n>>m;
 for(i=0;i<n;i++)
  for(j=0;j<m;j++)
    cin>>a[i][j];
 for(i=0;i<n;i++){

    for(j=0;j<m;j++){

        n1=a[i][j];
        if(i+1!=n)
            n2=i+1;
        if(j+1!=m)
            n3=j+1;
        else
            n3=n2;
        if(i+1==n)
            n2=n3;

 lcm1= (n1>n2) ? n1 : n2;
 while(1)
    {
        if( lcm1%n1==0 && lcm1%n2==0 )
            break;
        ++lcm1;
    }

 lcm2= (n1>n3) ? n1 : n3;
 while(1)
    {
        if( lcm2%n1==0 && lcm2%n3==0 )
            break;
         ++lcm2;
    }

 if(lcm1<lcm2)
    a[i][j]=lcm1;
 else
    a[i][j]=lcm2;

 }
 }

 for(i=0;i<n;i++){
    for(j=0;j<m;j++)
        cout<<a[i][j]<<" ";
    cout<<"\n";
 }
    return 0;
}
