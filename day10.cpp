#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int findMax(const int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

bool isPalindrome(const std::string &str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (!isalnum(str[left])) {
            left++;
        } else if (!isalnum(str[right])) {
            right--;
        } else {
            if (tolower(str[left]) != tolower(str[right])) {
                return false;
            }
            left++;
            right--;
        }
    }
    return true;
}

int main() {
    int choice;
    
    cout << "Choose an operation:\n1. Find Maximum in Array\n2. Check Palindrome\nEnter your choice: ";
    cin >> choice;
    
    if (choice == 1) {
        int size;
        cout << "Enter the size of the array: ";
        cin >> size;
        int arr[size];
        cout << "Enter the array elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
        cout << "The maximum value in the array is: " << findMax(arr, size) << endl;
    } 
    else if (choice == 2) {
        cin.ignore(); // To ignore leftover newline from previous input
        string str;
        cout << "Enter a string: ";
        getline(cin, str);
        if (isPalindrome(str)) {
            cout << "The string is a palindrome." << endl;
        } else {
            cout << "The string is not a palindrome." << endl;
        }
    } 
    else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}
