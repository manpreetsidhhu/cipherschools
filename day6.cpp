#include <iostream>
using namespace std;

int question1(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "Sum of the array: " << sum << endl;
    return 0;
}

int question2(int arr[], int n) {
    int sumOdd = 0, sumEven = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            sumEven += arr[i];
        else
            sumOdd += arr[i];
    }
    cout << "Sum of odd numbers: " << sumOdd << endl;
    cout << "Sum of even numbers: " << sumEven << endl;
    return 0;
}

int question3(int arr[], int n) {
    int oddCount = 0, evenCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    cout << "Number of odd numbers: " << oddCount << endl;
    cout << "Number of even numbers: " << evenCount << endl;
    return 0;
}

int main() {
    int n, choice;
    cout << "Enter Question number (1-3): ";
    cin >> choice;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if(choice == 1) {
        question1(arr, n);
    } else if(choice == 2) {
        question2(arr, n);
    } else if(choice == 3) {
        question3(arr, n);
    } else {
        cout << "Invalid Question number" << endl;
    }

    return 0;
}