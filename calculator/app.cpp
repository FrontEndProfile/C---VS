#include <iostream>

using namespace std;

int main() {
    char op;
    double num1, num2, result;
 

    cout << "Enter First number:";
    cin >> num1;
       cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "\n Enter Second number: ";
    cin >> num2;

    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/') {
        result = num1 / num2;
    } else {
        cout << "Error: Invalid operator." << endl;
    }

    cout << "Result: " << result << endl;

    return 0;
}
