#include <iostream>
#include <vector>
#include <string>
#include <cctype> // for isdigit function

using namespace std;

bool containsNumber(const string& str) {
    for (char ch : str) {
        if (isdigit(ch)) { // Check if the character is a digit
            return true;
        }
    }
    return false;
}

vector<string> filterStringsWithNumbers(const vector<string>& vec) {
    vector<string> result;

    for (const string& str : vec) {
        if (containsNumber(str)) {
            result.push_back(str); // add string to result if contains a number
        }
    }

    return result;
}

int main() {
    vector<string> vec;
    string input;

    cout << "Enter strings (type 'exit' to finish):" << endl;

    while (true) {
        cout << "> ";
        getline(cin, input); // Get input from the user

        if (input == "exit") { // Check if the user wants to exit
            break;
        }

        vec.push_back(input); // Add the input string to the vector
    }

    vector<string> result = filterStringsWithNumbers(vec);

    cout << "Strings that contain a number(s) from the vector: ";
    if (result.empty()) {
        cout << "None" << endl;
    } else {
        for (const string& str : result) {
            cout << str << " ";
        }
        cout << endl;
    }

    return 0;
}
