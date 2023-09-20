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
    HR::Employee employees[3];

    // Assign employee values
    anEmployee.firstInitial = 'J';
    anEmployee.lastInitial = 'D';
    anEmployee.employeeNumber = 42;
    anEmployee.salary = 80000;

    // Assign multiple employees using array
    employees[0].firstInitial = 'M';
    employees[0].lastInitial = 'P';
    employees[0].employeeNumber = 96;
    employees[0].salary = 120000;

    employees[1].firstInitial = 'A';
    employees[1].lastInitial = 'B';
    employees[1].employeeNumber = 12;
    employees[1].salary = 75000;

    employees[2].firstInitial = 'C';
    employees[2].lastInitial = 'D';
    employees[2].employeeNumber = 34;
    employees[2].salary = 123456;


    // Output the values of an employee
    cout << "Employee: " << anEmployee.firstInitial << anEmployee.lastInitial << endl;
    cout << "Number: " << anEmployee.employeeNumber << endl;
    cout << "Salary: $" << anEmployee.salary << endl;

    // Output employees from array
    for(auto & employee : employees) {
        cout << "Employee: " << employee.firstInitial << employee.lastInitial << endl;
        cout << "Number: " << employee.employeeNumber << endl;
        cout << "Salary: $" << employee.salary << endl << "\n";
    }
}
