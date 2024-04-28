#include <iostream>
using std::string;

using namespace std;

class employees
{
public:
    string Name;
    string Company;
    int age; 
};

int main()
{
    employees emp1;
    emp1.Name = "Udayraj";
    emp1.age = 45;
    cout<<emp1.Name<<endl;
}