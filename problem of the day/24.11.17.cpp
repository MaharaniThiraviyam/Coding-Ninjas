#include<iostream>
using namespace std;
 int main(){
  int i=10;
  int *p,**q,***r;
   p=&i;
   *p=15;
   q=&p;
   **q=20;
   r=&q;
    ***r=++(*p);
    cout<<"\n i="<<i;
    cout<<"\n p="<<p<<"  *p="<<*p;
    cout<<"\n q="<<q<<"  *q="<<*q;
    cout<<"\n r="<<r<<"  *r="<<*r;
    cout<<"\n **q="<<**q;
    cout<<"\n ***r="<<***r;

 }
