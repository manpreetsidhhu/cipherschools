#include <iostream>
using namespace std;

int question1(int a, int b, int c) {
    if(a >= b && a >= c) {
        cout << "The largest number is: " << a << endl;
    } else if(b >= a && b >= c) {
        cout << "The largest number is: " << b << endl;
    } else {
        cout << "The largest number is: " << c << endl;
    }
    return 0;
}

int question2(int score) {
    if(score >= 90 && score <= 100) {
        cout << "Grade: A" << endl;
    } else if(score >= 80 && score < 90) {
        cout << "Grade: B" << endl;
    } else if(score >= 70 && score < 80) {
        cout << "Grade: C" << endl;
    } else if(score >= 60 && score < 70) {
        cout << "Grade: D" << endl;
    } else if(score >= 0 && score < 60) {
        cout << "Grade: F" << endl;
    } else {
        cout << "Invalid score" << endl;
    }
    return 0;
}

int question3(int month) {
    switch(month) {
        case 1: cout << "The month is: January" << endl; break;
        case 2: cout << "The month is: February" << endl; break;
        case 3: cout << "The month is: March" << endl; break;
        case 4: cout << "The month is: April" << endl; break;
        case 5: cout << "The month is: May" << endl; break;
        case 6: cout << "The month is: June" << endl; break;
        case 7: cout << "The month is: July" << endl; break;
        case 8: cout << "The month is: August" << endl; break;
        case 9: cout << "The month is: September" << endl; break;
        case 10: cout << "The month is: October" << endl; break;
        case 11: cout << "The month is: November" << endl; break;
        case 12: cout << "The month is: December" << endl; break;
        default: cout << "Invalid month" << endl;
    }
    return 0;
}

int main() {
    int n;
    cout << "Enter Question number (1-3): ";
    cin >> n;

    if(n == 1) {
        int a, b, c;
        cout << "Enter the first number: ";
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;
        cout << "Enter the third number: ";
        cin >> c;
        question1(a, b, c);
    } else if(n == 2) {
        int score;
        cout << "Enter the score: ";
        cin >> score;
        question2(score);
    } else if(n == 3) {
        int month;
        cout << "Enter a number: ";
        cin >> month;
        question3(month);
    } else {
        cout << "Invalid Question number" << endl;
    }

    return 0;
}