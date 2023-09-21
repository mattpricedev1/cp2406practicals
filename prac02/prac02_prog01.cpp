//
// Created by Matthew Price on 20/9/2023.
//

#include <iostream>

using namespace std;

namespace HR {
    /*
     * Used enum class as they represent a fixed set of values, where each value has a distinct identity.
     */
    enum class jobTitle {
        manager, seniorEngineer, engineer
    };

    // Create and populate an employee
    struct Employee {
        char firstInitial;
        char lastInitial;
        int employeeNumber;
        int salary;
        jobTitle title;
    };
}

void display_job_title(HR::jobTitle title) {
    switch (title) {
        using namespace HR;
        case jobTitle::manager:
            cout << "Manager" << endl;
            break;
        case jobTitle::seniorEngineer:
            cout << "Senior Engineer" << endl;
            break;
        case jobTitle::engineer:
            cout << "Engineer" << endl;
            break;
    }
}

int main() {
    using namespace HR;
    // Create and populate an employee
    Employee anEmployee{};

    // Assign an employee values
    anEmployee.firstInitial = 'J';
    anEmployee.lastInitial = 'D';
    anEmployee.employeeNumber = 42;
    anEmployee.salary = 80000;
    anEmployee.title = jobTitle::manager;

    // Output the values of an employee
    cout << "Employee: " << anEmployee.firstInitial << anEmployee.lastInitial << endl;
    cout << "Number: " << anEmployee.employeeNumber << endl;
    cout << "Salary: $" << anEmployee.salary << endl;
    display_job_title(anEmployee.title);
}
