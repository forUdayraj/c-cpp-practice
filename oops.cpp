// class is user defined datatype
// in c++ there are 3 types of access modifiers private, public and protected
// if we dont create a constructor compiler created default constructor
// 3 rule
// constructor is just a method but dont have a return type
// constructor is same name as class name it beongs
// constructor are a public but they can be private and protected
#include <iostream>
using namespace std;

class employees
{
public:
    string Name;
    string Company;
    int age; 

    void introduce(){
        std::cout<<"Name "<<Name << std::endl;
        std::cout<<"Company "<<Company << std::endl;
        std::cout<<"Age "<<age << std::endl;
        }
    employees (string name, string company, int age){
        this->Name =  name;
        this->Company = company;
        this->age =   age;
    }
};

int main()
{
    employees emp1 = employees("Udayraj", "Udayraj", 23);
    emp1.introduce();
    // employees emp1;
    // emp1.Name = "Udayraj";
    // emp1.Company = "Udayraj";
    // emp1.age = 23;
    
    employees emp2 = employees("john", "amazon", 24);
    emp2.introduce();
}