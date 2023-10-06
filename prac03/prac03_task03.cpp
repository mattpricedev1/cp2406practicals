//
// Created by Matthew Price on 6/10/2023.
//
#include <iostream>

using namespace std;

/* Question: Why is the following line here?
 *           - Unlike Python, the function 'findAndReplace' must be declared before main.
 *           - The function definition of 'findAndReplace' is written below main.
 */
string findAndReplace(string haystack, const string_view& needle, const string_view& replaceWith);


int main() {

    string haystack{"THIS IS A TEST TEXT"};
    const char* needle{"TEST"};
    const char* replaceWith{"???"};
    /* Using const char* to save on allocations
     * When calling the function findAndReplace, there is no need for a string copy of these variables.
     */

    string result = findAndReplace(haystack, needle, replaceWith);

    cout << "haystack: " << haystack << endl;
    cout << "needle: " << needle << endl;
    cout << "replaceWith: " << replaceWith << endl;
    cout << "result: " << result << endl;

}

string findAndReplace(string haystack, const string_view& needle, const string_view& replaceWith) {
    // Make a copy of haystack
    string result = std::move(haystack);

    auto indexPosition(result.find(needle));
    if (indexPosition != string::npos) {
        result.replace(indexPosition, needle.length(), replaceWith);
    }
    return result;
}