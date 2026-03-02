// calculator using oop
#include <iostream>
using namespace std ;

class calcu{
    private: // can't be accessed
        double result;
    
    public: // public can be accessed throughout the code block
    calcu(){
        result = 0 ;
        cout << "calcu is running fine" << endl;
    }
    double add(double a, double b){
        result = a + b ;
        return result;
    }
    double sub(double a, double b){
         result = a - b ;
        return result;
    }
    double pro(double a , double b){
         result = a * b ;
        return result;
    }
    double div(double a , double b){
         result = a / b ;
        if (b ==0 ) {
            cout << "" << endl;
        }
        return result;
    }
   
};
int main() {
    calcu cal;
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
    cout << cal.add(num1,num2 ) << endl;
    break;
  case '-':
    cout << cal.sub(num1, num2)<< endl;
    break;
  case '*':
    cout << cal.pro(num1, num2) << endl;
    break;
  case '/':
   
      cout << cal.div(num1, num2) << endl;
    
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


