//
// Created by Matthew Price on 27/9/2023.
//
#include <iostream>

using namespace std;

// Question: Why is  the following line here?
string findAndReplace(string haystack, string needle, string replaceWith);


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

string findAndReplace(string haystack, string needle, string replaceWith) {
    // Make a copy of haystack
    string result = haystack;

    auto indexPosition(result.find(needle));
    if(indexPosition != string::npos) {
        result.replace(indexPosition, needle.length(), replaceWith);
    }
    return result;
}