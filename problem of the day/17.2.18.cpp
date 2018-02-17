#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,i;

cin >> t;

string s;

for(i=0;i<t;i++)
{

 cin >> s;

bool val = next_permutation(s.begin(), s.end());

if (val == false)
{

    cout << "no answer" << endl;

}

else

{

    cout << s << endl;

}
}

 return 0;
}
    
