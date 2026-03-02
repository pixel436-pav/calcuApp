// this is the calculator app in cpp just to get familiar with syntax - build
// using switch statement
#include <iostream>
using namespace std;
int main() {
  double num1, num2;
  char op;

  cout << "Enter Your First number : ";
  cin >> num1;
  cout << "Enter operator (+,-,*,/): ";
  cin >> op;
  cout << "Enter Second Number: ";
  cin >> num2;

  switch (op) {
  case '+':
    cout << num1 + num2;
    break;
  case '-':
    cout << num1 - num2;
    break;
  case '*':
    cout << num1 * num2;
    break;
  case '/':
    if (num2 == 0) {
      cout << "Error! Cannot divide by 0";
    } else {
      cout << num1 / num2;
    }
    break;
  default:
    cout << "Invalid operator";
  }

  return 0;
}
