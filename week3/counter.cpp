#include <iostream>
using namespace std;

int main(){

  int quarters, dimes, nickels, pennies;
  int m1, m2, m3, m4, sum;
  int dollar, cent;
  
  cout<<"Please enter the number of coins:"<<endl;
  cin>>quarters;
  cin>>dimes;
  cin>>nickels;
  cin>>pennies;
  m1 = quarters*25;
  m2 = dimes*10;
  m3 = nickels*5;
  m4 = pennies;
  sum = m1+m2+m3+m4;
  dollar = sum/100;
  cent = sum - dollar*100;
  cout<<"The total is "<<dollar<<" dollars and "<<cent<<" cents"<<endl;
  return 0;
}
