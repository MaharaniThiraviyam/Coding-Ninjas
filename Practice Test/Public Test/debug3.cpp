#include<iostream>
using namespace std;
 
int main() {
     int n;
     cin >> n;
     int i = 1;
     int col = 1;
     while(i <= n) {
         while(col <= i) {
             cout << col;
             col++;
         }
         i++;col=1;cout<<"\n";
     }
}
