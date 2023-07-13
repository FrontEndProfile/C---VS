#include <iostream>
using namespace std;



string welcome = "Student Marks Calculate Percentage with Grade.\n\n";
string FillInstruction = "Fill the Marks as Per Books Name.\n";


int english,urdu,computer,islamic,chemistry,biology;


int bookTotal;

int main() {
  cout << welcome;
  cout << FillInstruction;

  bookTotal = 100;
  cout << "All Books Numbers of " << bookTotal <<endl<<endl;

  cout << "English : ";
  cin>>english;
  cout << "Urdu : ";
  cin>>urdu ;
  cout << "Computer : ";
  cin>>computer ;
  cout << "Islamic : ";
  cin>>islamic ;
  cout << "Chemistry : ";
  cin>>chemistry ;
  cout << "Biology : ";
  cin>>biology ;

  float totalObtain = english + urdu + computer + islamic + chemistry + biology ;
  cout << "Total number of student : " << totalObtain<<endl;
  cout << "Out of Number ";

  float amount = 600;
  
  cout << "GET ALL BOOKS PERCENTAGE : " << (totalObtain / amount)*100;

  return 0;
}
