#include <iostream>

using namespace std;

int main()
{
  char operate;
  double numOne , numTwo , result;

 cout << "First Value : ";
 cin >> numOne ;

 cout << "ADD Method like [ + , - , * , / ]: ";
 cin >> operate;

 cout << "Second Value : ";
 cin >> numTwo ;


switch (operate)
{
  case '+' :
  result = numOne + numTwo;
  break;
  case '-' :
  result = numOne - numTwo;
  break;
  case '*' :
  result = numOne * numTwo;
  break;
  case '/' :
  result = numOne / numTwo;
  break;
  default:
  cout << "NOT FOUND METHOD & VALUE";
  break;
}
  cout << "Value :" <<result<<endl;

  return 0; 
}
