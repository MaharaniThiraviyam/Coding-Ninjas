#include<iostream>
using namespace std;
 int main()
 {
   int n,i,x=0,y=0;
   char s[25];
   cin>>n>>s;

   for(i=0;s[i]!='\0';i++)
   {
     if((s[i]=='L')&&((--x)!=-n))
        x--;
     else if((s[i]=='R')&&((++x)!=n))
        x++;
     else if((s[i]=='U')&&((++y)!=n))
        y++;
     else if((s[i]=='D')&&((--y)!=-n))
             y--;

   }
   cout<<x <<" "<<y;

 }
