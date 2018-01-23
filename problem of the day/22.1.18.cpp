void printSequence(int n)
{
    //write your code here
  int num,i,flag;
  for(i=1;i<=n;i++){
    for(flag=1,num=i;num>0;num/=10){
      if(num%10!=2 && num%10!=5)
        flag=0;
       }
    if(flag==1)
      cout<<i<<"\n";
  }
    
}
