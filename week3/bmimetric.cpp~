#include <iostream>
using namespace std;

int main(){

  int quarters, dimes, nickels, pennies;
  int m1, m2, m3, m4, sum;
  int dollar, cent;
  
  cout<<"Please enter the amount of money to convert:"<<endl;
  cin>>dollar;
  cin>>cent;
  dollar = dollar*100+cent;
  quarters = dollar/25;
  sum = dollar - quarters*25;
  dimes = sum/10;
  sum = sum - dimes*10;
  nickels = sum/5;
  sum = sum - nickels*5;
  pennies = sum;
  
  cout<<"The coins are "<<quarters<<" quarters, "<<dimes<<" dimes, "<<nickels<<" nickels and "<<pennies<<" pennies"<<endl;
  return 0;
}
