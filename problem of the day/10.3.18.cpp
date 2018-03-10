#include<bits/stdc++.h>
using namespace std;
int main() {

	string s;
 int ch,i;
 getline(cin,s);
 for(i=0;s[i]!='\0';i++){


  ch=s[i];

  if(s[i]==' ')
   cout<<" ";

  if(ch>96 && ch<123)
   cout<<char(ch-32);
   else if(ch>64 && ch<92)
    cout<<char(ch+32);
 }

 return 0;

}
