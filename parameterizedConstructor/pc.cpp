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
    // Copy Constructor - new
    Student(Student &s) {        // takes another Student as input
           name = s.name;
           marks = s.marks;
           cout << "Copy constructor called!" << endl;
       }
       //Destructure - new
       ~Student() {                 // same name as class with ~ in front
              cout << name << " object destroyed!" << endl;
          }

    void display() {
        cout << "Name: " << name << " Marks: " << marks << endl;
    }
};

int main() {
    Student s1;                      // calls default constructor
    Student s2(s1);          
    Student s3 ("Pavneet",100);// calls parameterized constructor


    s1.display();
    s2.display();
    s3.display();
    return 0;
}
