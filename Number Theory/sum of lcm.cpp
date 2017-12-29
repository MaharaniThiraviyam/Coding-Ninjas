#include<iostream>
using namespace std;
int main(){
 int n, minMultiple,sum=0,i;
    cin>>n;

    for(i=1;i<=n;i++){


    minMultiple = (i>n) ? i : n;

    // Always true
    while(1)
    {
        if( minMultiple%i==0 && minMultiple%n==0 )
                    break;

        ++minMultiple;
    }
     sum+=minMultiple;
    }
    cout<<sum;
    return 0;
}


