#include <iostream>
using namespace std;

void findTarget(const int arr[], int size, int target) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            found = true;
            break;
        }
    }
    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int findTargetIndex(const int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i + 1; // 1-based indexing
        }
    }
    return -1;
}

int main() {
    int choice, size, target;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];

    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target value: ";
    cin >> target;

    cout << "Choose an operation:\n1. Check if target exists\n2. Find target index (1-based)\nEnter your choice: ";
    cin >> choice;

    if (choice == 1) {
        findTarget(arr, size, target);
    } 
    else if (choice == 2) {
        int index = findTargetIndex(arr, size, target);
        cout << index << endl;
    } 
    else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}
