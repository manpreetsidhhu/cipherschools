#include <iostream>
using namespace std;

void pointerToInteger() {
    int var = 10;
    int *ptr = &var;

    cout << "Value of var: " << var << endl;
    cout << "Value of var using pointer: " << *ptr << endl;
}

void pointerToArray() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    cout << "Array elements using pointer arithmetic: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
}

void pointerToPointer() {
    int var = 100;
    int *ptr = &var;
    int **ptr2 = &ptr;

    cout << "Value of var: " << var << endl;
    cout << "Value of var using single pointer: " << *ptr << endl;
    cout << "Value of var using double pointer: " << **ptr2 << endl;
}

int main() {
    int choice;

    cout << "Choose an operation:\n1. Pointer to Integer\n2. Pointer to Array\n3. Pointer to Pointer\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            pointerToInteger();
            break;
        case 2:
            pointerToArray();
            break;
        case 3:
            pointerToPointer();
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}
