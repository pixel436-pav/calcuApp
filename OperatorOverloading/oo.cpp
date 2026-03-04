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

    // OPERATOR OVERLOADING 
    Student operator+(Student s) {
        return Student("Combined",marks + s.marks);
    }

    void display() {
        cout << "Name: " << name << "\t Marks: " << marks << endl;
    }
};

int main() {
    Student s1("Pavneet", 80);
    Student s2("John", 90);

    Student s3 = s1 + s2;   // calls operator+

    s1.display();
    s2.display();
    s3.display();   // 170

    return 0;
}
