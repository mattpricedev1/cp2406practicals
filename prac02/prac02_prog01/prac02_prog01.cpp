//
// Created by Matthew Price on 20/9/2023.
//

#include <iostream>

using namespace std;

namespace HR {
    // Create and populate an employee
    struct Employee {
        char firstInitial;
        char lastInitial;
        int employeeNumber;
        int salary;
    };
}

int main() {
    // Create and populate an employee
    HR::Employee anEmployee;

    // Assign employee values
    anEmployee.firstInitial = 'J';
    anEmployee.lastInitial = 'D';
    anEmployee.employeeNumber = 42;
    anEmployee.salary = 80000;

    // Output the values of an employee
    cout << "Employee: " << anEmployee.firstInitial << anEmployee.lastInitial << endl;
    cout << "Number: " << anEmployee.employeeNumber << endl;
    cout << "Salary: $" << anEmployee.salary << endl;
}
