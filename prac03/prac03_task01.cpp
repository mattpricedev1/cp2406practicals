//
// Created by Matthew Price on 21/9/2023.
//
#include <iostream>
/*
 * You do not need to #import <string> because it instead uses C-style strings.
 * - They are built-in to the language.
 */

using namespace std;

int main() {
    string userString01, userString02;

    cout << "Please first string: ";
    getline(cin, userString01);

    cout << "Please second string: ";
    getline(cin, userString02);

    // Process strings in alphabetical order and output result.
    if(userString01 < userString02) {
        cout << userString01 << " " << userString02 << endl;
    } else {
        cout << userString02 << " " << userString01 << endl;
    }
}