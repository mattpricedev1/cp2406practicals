//
// Created by Matthew Price on 20/9/2023.
//
#include <iostream>
#include <format>
#include <string>
//#include employee;

using namespace std;

int main() {
    // create and populate an employee
//    Employee anEmployee;
    char firstInitial = 'J';
    char lastInitial = 'D';
    int employeeNumber = 42;
    int salary = 80000;

    // output the values of an employee
    cout << "Employee: " << firstInitial << lastInitial << endl;
    cout << "Number: " << employeeNumber << endl;
    cout << "Salary: $" << salary << endl;
}

//export module employee;
//
//export struct Employee {
//    char firstInitial;
//    char lastInitial;
//    int employeeNumber;
//    int salary;
//};
