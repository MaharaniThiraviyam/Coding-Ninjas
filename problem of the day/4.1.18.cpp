int sum(int *arr,int l)
{
//Write code here 
  int i,count=0,count1=0;
   for(i=0;i<l;i++){
      if(arr[i]>0)
        count+=arr[i];
       else
         count1+=arr[i];
   }
  return (count+count1);
}
