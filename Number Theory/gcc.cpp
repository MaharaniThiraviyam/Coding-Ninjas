#include <iostream>
using namespace std;
int main()
{
    int n1, n2, i, gcd,n3;
     cin>>n1>>n2;
    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    cout<<gcd<<n3;
    return 0;
}
