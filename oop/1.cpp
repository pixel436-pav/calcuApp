#include <iostream>
#include <string>
using namespace std;

class Teacher {
    // Properties / Attributes
    string name;
    string dept;
    string subject;
    double salary;
    
    
    
    //methods / memeber fucntions 
    void changeDept(string newDept){
        dept = newDept;
    }
};

int main (){
    Teacher t1;
    std::cout<<"how are you?"<<endl;
    cout<<"Hello World"<<endl;
    return 0;
}