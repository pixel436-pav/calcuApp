#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    Student(string n, int m) {
        name = n;
        marks = m;
    }

    //  giving this outside function special access
    friend void showDetails(Student s);
};

// this function is OUTSIDE the class
// but can access private members because of friend
void showDetails(Student s) {
    cout << "Name: " << s.name << endl;    // accessing private!
    cout << "Marks: " << s.marks << endl;  // accessing private!
}

int main() {
    Student s1("Pavneet", 95);
    showDetails(s1);   // normal function call
    return 0;
}
