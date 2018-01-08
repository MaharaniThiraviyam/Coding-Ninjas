void printPatt(int n)
{
    //write your code here
  
     int i,j,half;

  if(n%2==0)
    n++;
      half=(n/2)+1;
   for(i=1;i<=half;i++)
  {
    for(j=0;j<i;j++)
     cout<<"*";
     cout<<"\n";
  }
  for(i=half-1;i>=0;i--)
  {

       for(j=0;j<i;j++)
     cout<<"*";
     cout<<"\n";
  }
}
