// function overLoading - cpp by itself figurs out which funcction to call depending on what you ask it do 
#include <iostream>
using namespace std;

class Print {
public:
    void show(int a) {
        cout << "Integer: " << a << endl;
    }
    void show(double a) {       // same name, different type
        cout << "Double: " << a << endl;
    }
    void show(string a) {       // same name, different type
        cout << "String: " << a << endl;
    }
    void show(int a , int b){
        cout << "Integers :" << a + b << endl;
    }
};

int main() {
    Print p;
    p.show(5);          // calls first one
    p.show(3.14);       // calls second one
    p.show("Pavneet");  // calls third one
    p.show(15,91);      //calls the fourth one
    return 0;
}