#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
  int year;
  year= atoi(argv[argc-1]);
  
  if (((year%4)==0 && (year%100)!=0)){
    cout<<year<<" was a leap year"<<endl;
  }else if ((year%400)==0){
    cout<<year<<" was a leap year"<<endl;
  }else{
    cout<<year<<" was not a leap year"<<endl;
  }
  
  return 0;
}
