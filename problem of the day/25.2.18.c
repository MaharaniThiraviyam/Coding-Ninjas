#include<stdio.h>
#include<stdlib.h>
int main(){
 char s[25],s1[]="@hogwarts.com";int i,count=0,j;
  scanf("%s",s);
  for(i=0;s[i]!='@';i++)
   if(s[i]>96  && s[i]<123)
    count++;
   if(count!=5)
    printf("no");
   else{
     for(i=5,j=0;i<19;i++,j++){
        if(s[i]!=s1[j])
            count++;
     }

     if(count!=6)
     printf("yes");
   }
   return 0;

}
