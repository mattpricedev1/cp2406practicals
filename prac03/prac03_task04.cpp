//
// Created by Matthew Price on 6/10/2023.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<double> numbers{};  // Initialise empty vector

    cout << "Enter an unknown number of floating-point numbers (followed by enter)\n"
            "To stop, enter 0:\n";

    while(true) {
        double number{};
        cout << ">>> ";
        cin >> number;
        if(number != 0) {
            numbers.insert(numbers.end(), number);  // Insert number at end of vector
        } else {
            break;
        }
    }

    for(double number : numbers) {
        cout << number << endl;
    }
}