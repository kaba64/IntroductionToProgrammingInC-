#include <iostream>
using namespace std;

int main(){
  int number;
  int i;
  cout<<"Please enter a positive integer:"<<endl;
  cin>>number;

  for(i=1;i<=number;i++)
    cout<<2*i<<endl;
  
  return 0;
}
