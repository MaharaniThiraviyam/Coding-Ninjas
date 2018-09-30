void internetAddress(string str) {
  int flag1=0,flag2=0,i;
  

  for(i=0;str[i]!='\0';i++){
   if(str[i]=='p' && flag1==0){
    cout<<str[i]<<"://";
    flag1=1;
    }

   else if(str[i]=='r' && flag2==0){

   cout<<".ru/";
   flag2=1;i++;
   }
   else
    cout<<str[i];

  }
    
}
