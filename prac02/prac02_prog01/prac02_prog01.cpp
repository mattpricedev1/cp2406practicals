//
// Created by Matthew Price on 20/9/2023.
//
import<iostream>;
import<format>;
import employee;

using namespace std;

int main() {
    // create and populate an employee
    Employee anEmployee;
    anEmployee.firstInitial = 'J';
    anEmployee.lastInitial = 'D';
    anEmployee.employeeNumber = 42;
    anEmployee.salary = 80000;

    // output the values of an employee
    cout << format("Employee: {}{}", anEmployee.firstInitial, anEmployee.lastInitial) << endl;
    cout << format("Number: {}", anEmployee.employeeNumber) << endl;
    cout << format("Salary: ${}", anEmployee.salary) << endl;
}

export module
employee;

export struct Employee {
    char firstInitial;
    char lastInitial;
    int employeeNumber;
    int salary;
};
