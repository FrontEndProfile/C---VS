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


  if (operate == '+' ){
    result = numOne + numTwo;
  }else if (operate == '-' ){
    result = numOne + numTwo;
  }
  else if (operate == '*' ){
    result = numOne + numTwo;
  }
  else if (operate == '/' ){
    result = numOne + numTwo;
  }else {
    cout << "ADD Valid Method like ( + , - , * , / )";
  }

  cout << "Value :" <<result<<endl;

  return 0;
}
