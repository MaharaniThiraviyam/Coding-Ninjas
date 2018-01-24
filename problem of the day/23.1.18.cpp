void printPatt(int n)
{
    //write your code here
  int i,j,total,temp=0;char ch;
 
   for(i=n;i>0;i--,temp++){
   total=(i*2)+temp;
 //cout<<"total="<<total;
   for(j=1,ch='A';j<=total;j++){
    if(j<=temp){
         cout<<" ";
         continue;
   }
    if(j<=(total+temp)/2)
      cout<<ch++;
     else
            cout<<--ch;
           }
   cout<<"\n";
  }

}
