#include <iostream>
#include <string>
using namespace std;

int stringLength(const std::string &str) {
    return str.length();
}

int countCharacter(const std::string &str, char ch) {
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}

string concatenateStrings(const std::string &str1, const std::string &str2) {
    return str1 + str2;
}

int main() {
    string str1, str2;
    char ch;
    int choice;
    cout << "Choose an operation:\n1. Find string length\n2. Count occurrences of a character\n3. Concatenate two strings\nEnter your choice: ";
    cin >> choice;
    cin.ignore();
    if (choice == 1) {
        cout << "Enter a string: ";
        getline(cin, str1);
        cout << "The length of the string is: " << stringLength(str1) << endl;
    } 
    else if (choice == 2) {
        cout << "Enter a string: ";
        getline(cin, str1);
        cout << "Enter the character to count: ";
        cin >> ch;
        cout << "The character '" << ch << "' occurs " << countCharacter(str1, ch) << " times in the string." << endl;
    } 
    else if (choice == 3) {
        cout << "Enter the first string: ";
        getline(cin, str1);
        cout << "Enter the second string: ";
        getline(cin, str2);
        cout << "Concatenated string: " << concatenateStrings(str1, str2) << endl;
    } 
    else {
        cout << "Invalid choice" << endl;
    }
    return 0;
}
