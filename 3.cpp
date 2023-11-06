#include <iostream>
#include <string>

using namespace std;
struct Employee {
    string emp_name;
    int emp_code;
    double emp_salary;
    string emp_branch;
};

int main() {
    
    Employee employee;
    //cin.ignore();
    employee.emp_name = "John Doe";
    employee.emp_code = 101;
    employee.emp_salary = 50000.0;
    employee.emp_branch = "HR";

    cout << "Employee Name: " << employee.emp_name << endl;
    cout << "Employee Code: " << employee.emp_code << endl;
    cout << "Employee Salary: " << employee.emp_salary << endl;
    cout << "Employee Branch: " << employee.emp_branch << endl;

    return 0;
}

