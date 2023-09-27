//
// Created by Matthew Price on 27/9/2023.
//
#include <iostream>

using namespace std;

/* Question: Why is the following line here?
 *           - Unlike Python, the function 'findAndReplace' must be declared before main.
 *           - The function definition of 'findAndReplace' is written below main.
 */
string findAndReplace(string haystack, const string& needle, const string& replaceWith);


int main() {

    string haystack{"THIS IS A TEST TEXT"};
    string needle{"TEST"};
    string replaceWith{"???"};

    string result = findAndReplace(haystack, needle, replaceWith);

    cout << "haystack: " << haystack << endl;
    cout << "needle: " << needle << endl;
    cout << "replaceWith: " << replaceWith << endl;
    cout << "result: " << result << endl;

}

string findAndReplace(string haystack, const string& needle, const string& replaceWith) {
    // Make a copy of haystack
    string result = std::move(haystack);

    auto indexPosition(result.find(needle));
    if (indexPosition != string::npos) {
        result.replace(indexPosition, needle.length(), replaceWith);
    }
    return result;
}