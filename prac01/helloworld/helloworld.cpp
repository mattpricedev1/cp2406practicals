#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg;
    msg.push_back("Hello");
    msg.push_back("C++");
    msg.push_back("World");
    msg.push_back("from");
    msg.push_back("VS Code");
    msg.push_back("and the C++ extension!");
    
    for(const string &word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}