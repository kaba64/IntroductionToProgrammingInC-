#include <iostream>
#include <string>
using namespace std;
  
int main(int argc, char** argv)
{
    cout << "You have entered " << argc
         << " arguments:" << "\n";
    int year;
    
    for (int i = 0; i < argc; ++i){
      
      cout << argv[i] << "\n";
      year = atoi(argv[i]);
      cout << year << "\n";
    }
    return 0;
}
