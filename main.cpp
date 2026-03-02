// this is the calculator app in cpp just to get familiar with syntax - build
// using switch statement
// cpp reads code from top to bottom if a function is defined after the main function then the main function will not know that it exists 
#include <iostream>
using namespace std;

double add(double a ,double b){
    
    return a + b;
}
double product(double a , double b){
    return a * b;
}
double sub(double a , double b ){
    return a - b;
}
double divide(double a , double b ){
    if(b == 0){
        cout << "Error! cannot divide by zero" << endl;
        return 0;
    }
    return a / b ;
}
int main() {
  double num1, num2;
  char op;
  char choice;
  

  do{cout << "Enter Your First number : ";
  cin >> num1;
  cout << "Enter operator (+,-,*,/): ";
  cin >> op;
  cout << "Enter Second Number: ";
  cin >> num2;

  switch (op) {
  case '+':
    cout << add(num1,num2 ) << endl;
    break;
  case '-':
    cout << sub(num1, num2)<< endl;
    break;
  case '*':
    cout << product(num1, num2) << endl;
    break;
  case '/':
   
      cout << divide(num1, num2) << endl;
    
    break;
  default:
    cout << "Invalid operator";
  }
    
    cout << "Calculate Again(y/n): ";
    cin >> choice;
  }while(choice =='y');
  
  cout << "Bye!";

  return 0;
}


