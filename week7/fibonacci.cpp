#include <iostream>
using namespace std;

int main(){
  int n, i;
  int a1 ,a2 , a3;
  a1 =1;
  a2 = 1;
  cout<<"Please enter a positive integer greater than 1:"<<endl;
  cin>>n;
  cout<<a1<<endl;
  cout<<a2<<endl;
  
  for(i=3;i<=n;i++){
    a3 = a1 + a2;
    cout<<a3<<endl;
    a1 = a2;
    a2 = a3;
  }
  return 0;
}
