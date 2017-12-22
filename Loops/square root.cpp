#include<iostream>
using namespace std;
int main(){
 int n,i,ans=1;
 cin>>n;
  for(i=1;ans<n;i++)
   ans=i*i;
   if(ans==i)
   cout<<i<<ans;
   else
    cout<<i-2;
}
