#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  double weight, height;
  double bmi;
  
  cout<<"Please enter weight in kilograms:"<<endl;
  cin>>weight;
  cout<<"Please enter height in meters:"<<endl;
  cin>>height;
  bmi = weight/(height*height);
  cout<<fixed<<setprecision(2);
  cout<<"BMI is: "<<bmi<<endl;
  return 0;
}
