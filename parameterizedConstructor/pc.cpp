#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    // default constructor
    Student() {
        name = "Unknown";
        marks = 0;
    }

    // parameterized constructor - new topic
    Student(string n, int m) {
        name = n;
        marks = m;
    }

    void display() {
        cout << "Name: " << name << " Marks: " << marks << endl;
    }
};

int main() {
    Student s1;                      // calls default constructor
    Student s2("John", 95);          // calls parameterized constructor
    Student s3 ("Pavneet",100);

    s1.display();
    s2.display();
    s3.display();
    return 0;
}
