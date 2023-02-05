#include <iostream>
using namespace std;

int main(){
  int num1, num2, num3, num4;
  int countodd, counteven;

  countodd=0;
  counteven=0;
  
  cout<<"Please enter 4 positive integers, separated by a space:"<<endl;
  cin>>num1>>num2>>num3>>num4;

  if(num1%2==0){
    counteven +=1;
  }else{
    countodd +=1;
  }
  
  if(num2%2==0){
    counteven +=1;
  }else{
    countodd +=1;
  }
  
  if(num3%2==0){
    counteven +=1;
  }else{
    countodd +=1;
  }
  
  if(num4%2==0){
    counteven +=1;
  }else{
    countodd +=1;
  }

  if(counteven>countodd){
    cout<<"more evens"<<endl;
  }else if(counteven==countodd){
    cout<<"same number of evens and odds"<<endl;
  }else{
    cout<<"more odds"<<endl;
  }
  return 0;
}

