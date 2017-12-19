#include<iostream>
using namespace std;
int main()
{
  int score1,score2;
  cin>>score1>>score2;

  if(((score1==6)&&(score2<5))||((score2==6)&&(score1<5)))
    cout<<"true";
  else if(((score1>5)&&(score2==5))||((score1==5)&&(score2>5)))
     cout<<"true";
  else
     cout<<"false";

}
