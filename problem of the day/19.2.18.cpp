#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int n,t,a[100000],p,q,i,z,min;
	cin>>n>>t;
	 for(i=0;i<n;i++)
	  cin>>a[i];
	 for(i=0;i<t;i++){
	 	cin>>p>>q;
	 	for(z=p,min=100000;z<=q;z++){
	 		if(a[z]<min)
	 		 min=a[z];
	 	
		 }
		 cout<<min<<"\n";
	 }
	 return 0;
  
}
