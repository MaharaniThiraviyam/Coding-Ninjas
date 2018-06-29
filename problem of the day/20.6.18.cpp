#include<iostream>
using namespace std;
int main(){
 int num,i,j,z;
   cin>>num;

   for(i=0;i<num;i++){
    for(j=0,z=0;j<2*num;j++){

      if(j<num-i)
        cout<<++z;
      else if(j>=(num-i) &&j<(num+i))
         cout<<"*";
      else
        cout<<z--;

    }
    cout<<"\n";
   }
   return 0;
}
