#include <iostream>
#include <string>
using namespace std;

class employees {
public:
    string name, company;
    int age;

    // Constructor declaration
    employees(string name, string company, int age);
};

// Constructor definition outside the class using scope resolution operator
employees::employees(string name, string company, int age) {
    this->name = name;
    this->company = company;
    this->age = age;
};

int main() {
    // Creating an object of employees
    employees emp1("John Doe", "Acme Corp", 30);
    cout << "Employee Name: " << emp1.name << endl;
    cout << "Company: " << emp1.company << endl;
    cout << "Age: " << emp1.age << endl;

    cout << "Hello World!\n";
    return 0;
};
