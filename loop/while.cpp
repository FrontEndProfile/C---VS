#include <iostream>
using namespace std;

int main() {
  // While Loop 
  // FIRST EXAMPLES
  int n;
  cin>>n;
  while (n>0){
    cout << n << " zero si Bhra Number."<<endl;
    cout << "Again Try To less than Zero or (Zero) : \n";
    cin>> n;
  }
  // I think Else Part nhi Hota While Mi !
  
  // SECOND EXAMPLES
  cout << "Next Loop START \n";
  int y;
  cin >> y;
  cout << "Loop start base on number \n";

  while (y<10){
    cout<< y << "\n";
    y++;
  }
  

}