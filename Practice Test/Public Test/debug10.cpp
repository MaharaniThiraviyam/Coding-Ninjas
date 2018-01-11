#include<iostream>
#include<cstring>
using namespace std;



int main(){
  char str[100];
  cin >> str;
  
  char ch1 ;
  cin >> ch1;
  char ch2 ;
  cin >> ch2;
  int len = strlen(str);
  for(int i = 1; i <=len; i++){
    if(str[i] == ch1){
      str[i] = ch2;
    }
  }
    cout << str << endl; 
  }




