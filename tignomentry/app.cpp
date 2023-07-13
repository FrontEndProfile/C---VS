#include <iostream>
using namespace std;

int main() {


 string  first = "First Quantity";
 string  two = "Second Quantity";
 string  three = "Third Quantity";
 string  four = "Four Quantity";


float num;
cout << "ENTER OF NUMBER 0 TO 360 : \n";
cin >> num;

if (num >= 0 && num <= 90){
  cout << first;
}else if (num > 90 && num <= 180){
  cout << two;
}else if (num > 180 && num <= 270){
  cout << three;
}else if (num > 270 && num <= 360){
  cout << four;
}else {
  cout << "Pleas add Value Only 0 to 360 Between";
}

  return 0;
}