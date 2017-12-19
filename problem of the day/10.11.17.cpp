#include<iostream>
using namespace std;
int main()
{
 char s[20];int num,i,spl,val;
  cin>>s>>num;
  val=num;
   spl=num%10;

   if(num>26)
    num%=26;

   cout<<"spl="<<spl;
  for(i=0;s[i]!='\0';i++)
  {

   if((s[i]>64)&&(s[i]<=90))//capital letters
    {

    if((s[i]+num)>90)
     s[i]=((s[i]+num)%90)+64;
     else
        s[i]+=num;

    }
   else if((s[i]>96)&&(s[i]<=122))//small letters
    {
      if((s[i]+num)>122)
      s[i]=((s[i]+num)%122)+96;
      else
        s[i]+=num;
    }

   else if((s[i]>47)&&(s[i]<=57)) //numberic values(0-9)
     {
         if(val>10)
         {
           if((s[i]+spl)>57)
            s[i]=(((s[i]+spl)%57)+47);
         else
            s[i]+=spl;

         }
         else
         {

        if((s[i]+num)>57)
         s[i]=(((s[i]+num)%57)+47);
        else
         s[i]+=num;
         }
    }

  }
 cout<<s;
}
