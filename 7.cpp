#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int employeeID;
    double salary;

public:
    Employee(std::string n, int id, double sal) {
        name = n;
        employeeID = id;
        salary = sal;
    }
    void displayEmployeeInfo() {
        std::cout << "Employee Name: " << name << std::endl;
        std::cout << "Employee ID: " << employeeID << std::endl;
        std::cout << "Salary: $" << salary << std::endl;
    }
    void giveRaise(double amount) {
        salary += amount;
        std::cout << "Salary raised by $" << amount << std::endl;
    }
};

int main() {
    Employee emp("John Doe", 12345, 50000.0);
    std::cout << "Initial Employee Information:" << std::endl;
    emp.displayEmployeeInfo();
    emp.giveRaise(5000.0);
    std::cout << "\nUpdated Employee Information:" << std::endl;
    emp.displayEmployeeInfo();

    return 0;
}
