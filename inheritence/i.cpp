#include <iostream>
#include <cmath>  // for sqrt()
using namespace std;

class calcu {                    // PARENT class
private:
    double result;

public:
    calcu() {
        result = 0;
        cout << "Calculator ready!" << endl;
    }
    double add(double a, double b) {
        result = a + b;
        return result;
    }
    double sub(double a, double b) {
        result = a - b;
        return result;
    }
    double pro(double a, double b) {
        result = a * b;
        return result;
    }
    double div(double a, double b) {
        if(b == 0) {
            cout << "Error! Cannot divide by 0" << endl;
            return 0;
        }
        result = a / b;
        return result;
    }
};

// YOUR TASK: create a child class below
class scientificCalcu : public calcu {   // 👈 this is how inheritance works
public:
    double squareRoot(double a) {
        return sqrt(a);   // sqrt() comes from cmath library
    }
    double square(double a){
        return (a * a) ;
    }
};

int main() {
    scientificCalcu sci;  // child object

    // inherited from parent 
    cout << sci.add(5, 3) << endl;

    // own method 
    cout << sci.squareRoot(16) << endl;

    // call square() here too
    cout << sci.square(9) << endl;
    

    return 0;
}