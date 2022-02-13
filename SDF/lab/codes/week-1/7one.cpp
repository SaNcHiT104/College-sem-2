#include <iostream>
using namespace std;

struct employee
{
    char name[30];
    int age;
    float salaryComp[5];
    float totalSalary = 0.0;
};

int main()
{
    const char *comp[5] = {"Basic", "HRA", "Book Allowance", "Furniture Allowance", "Special Allowance"};
    struct employee emp;
    cout << "Enter full name: ";
    cin.get(emp.name, 30);
    cout << "Enter age: ";
    cin >> emp.age;
    cout << "Enter salary components:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << comp[i] << ": ";
        cin >> emp.salaryComp[i];
        emp.totalSalary+=emp.salaryComp[i];
    }
    cout << "\nDisplaying Information.\n";
    cout << "Name: " << emp.name << endl;
    cout << "Age: " << emp.age << endl;
    cout << "Salary: " << emp.totalSalary << endl;
    return 0;
}

