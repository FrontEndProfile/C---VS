#include <iostream>
using namespace std;

int sum, sub , multi , division;
float numOne , numTwo;

int main() {
  cout << "MAKE CLI Calculator. \n";
  cout << "ADD First Values !\n";
  cin >> numOne;
  cout << "ADD First Values !\n";
  cin >> numOne;
  cout << "ADD Second Values !\n";
  cin >> numTwo;

  sum = numOne + numTwo;
  sub = numOne - numTwo;
  multi = numOne * numTwo;
  division = numOne / numTwo;

  cout << "\n the Sum of = "<<sum;
  cout << "\n the Sub of = "<<sub;
  cout << "\n the Multi of = "<<multi;
  cout << "\n the Div of = "<<division;  

  return 0;
}