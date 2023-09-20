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
    /*
     * Used enum class as they represent a fixed set of values, where each value has a distinct identity.
     */
    enum class jobTitle {manager, seniorEngineer, engineer};
}

int main() {
    // Create and populate an employee
    HR::Employee anEmployee{};
    HR::jobTitle title;

    // Assign employee values
    anEmployee.firstInitial = 'J';
    anEmployee.lastInitial = 'D';
    anEmployee.employeeNumber = 42;
    anEmployee.salary = 80000;
    title = HR::jobTitle::manager;

    // Output the values of an employee
    cout << "Employee: " << anEmployee.firstInitial << anEmployee.lastInitial << endl;
    cout << "Number: " << anEmployee.employeeNumber << endl;
    cout << "Salary: $" << anEmployee.salary << endl;

    switch (title) {
        case HR::jobTitle::manager:
            cout << "Manager" << endl;
            break;
        case HR::jobTitle::seniorEngineer:
            cout << "Senior Engineer" << endl;
            break;
        case HR::jobTitle::engineer:
            cout << "Engineer" << endl;
            break;
    }
}
