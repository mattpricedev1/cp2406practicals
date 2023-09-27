//
// Created by Matthew Price on 27/9/2023.
//
#include <iostream>

using namespace std;

/* TODO: Write a function with three parameters--the haystack, needle, and replacement string--that returns
 *       a copy of the haystack with all the needles replaced with the replacement string.
 */

string findAndReplace(string haystack, string needle, string replaceWith);


int main() {

    string haystack{"aaabbbcojncuicb[u2b3]"};
    string needle{"["};
    string replaceWith{"???"};

    string result = findAndReplace(haystack, needle, replaceWith);

}

string findAndReplace(string haystack, string needle, string replaceWith) {
    auto result{haystack};
    return result;
}