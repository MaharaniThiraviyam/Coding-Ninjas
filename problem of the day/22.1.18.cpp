void printSequence(int n)
{
    //write your code here
  int num,i,flag;
  for(i=1;i<=n;i++){
    for(flag=0,num=i;num>0;num/=10){
      if(num%10==2 || num%10==5)
        flag=1;
    else{
        flag=0;
      break;
    }
  }
    if(flag==1)
      cout<<i<<"\n";
  }
    
}
