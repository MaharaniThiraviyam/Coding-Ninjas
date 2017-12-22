#include<iostream>
using namespace std;
int main(){
 int basic,total=0;
 float da=0,hra=0,pf=0;
 char allow;
 cin>>basic>>allow;
 hra=(basic*20)/100;
 da=(basic*50)/100;
 pf=(basic*11)/100;
 if(allow=='A')
 total+=1700;
 else if(allow=='B')
 total+=1500;
 else
 total+=1300;

 total=total+basic+hra+da-pf;


 cout<<total;

}
