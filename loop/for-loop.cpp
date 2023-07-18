#include <iostream>
using namespace std;

int main() {

  // for (int i = 1; i < 10; i++){
  //   cout << "Loop Line Number : " << i << endl;
  // }


  // int z,x;
  // cout << "Enter Number Want Table ! " <<endl;
  // cin >> z;
  // cout << "======== Generate Table ============ \n";

  // for ( x = 1; x <= 10; x++ ){
  //   cout << z << " * " << x << " = " << z * x <<endl;
  //   cout << "====================== \n";
  // }
  

  // for loop base on count and condition like while loop &&
  // use the nested loop
  // top si bottom pr ati ha


  // make simple pattern 

  int add;
  cout << "Enter Pattern No : ";
  cin>>add;

  for (int p = 1; p<=add; p++) {

    for (int u = 1; u <=p; u++){
     cout << " * "; // star base pattern
    //  cout << p; // this number base pattern 
    }
    cout << endl;

  }



  // for each 
  // int myNumbers[5] = {10, 20, 30, 40, 50};
  // for (int i : myNumbers) {
  //   cout << i << "\n";
  // }


  return 0;
}