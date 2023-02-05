#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  double weight, height;
  double bmi;
  
  cout<<"Please enter weight in pounds:"<<endl;
  cin>>weight;
  weight = weight*0.453592;
  cout<<"Please enter height in inches:"<<endl;
  cin>>height;
  height = height*0.0254;
  bmi = weight/(height*height);
  cout<<fixed<<setprecision(2);
  cout<<"BMI is: "<<bmi<<endl;
  return 0;
}
