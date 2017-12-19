 #include<iostream>
 using namespace std;
 int main()
 {
 int sum1=0,val=0;
 cin>>sum1;
 while(sum1>0)
         {
            val=val+(sum1%10);
            sum1=sum1/10;
            cout<<"\n sum="<<sum1;

              if(val>9)
              {
                sum1=sum1+val;
              //  cout<<"sum="<<sum;
                val=0;
              }
         }
cout<<"\n val="<<val;
}
