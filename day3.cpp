#include <iostream>
using namespace std;

int question1(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;
    return 0;
}

int question2(int n) {
    int factorial = 1;
    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << "The factorial of " << n << " is: " << factorial << endl;
    return 0;
}

int question3(int n) {
    cout << "Multiplication table of " << n << ":" << endl;
    for(int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}

int main() {
    int n;
    cout << "Enter Question number (1-3): ";
    cin >> n;

    if(n == 1) {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        question1(num);
    } else if(n == 2) {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        question2(num);
    } else if(n == 3) {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        question3(num);
    } else {
        cout << "Invalid Question number" << endl;
    }

    return 0;
}
