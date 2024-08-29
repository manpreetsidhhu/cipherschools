#include <iostream>
using namespace std;

// Function for Question 1: Arithmetic operations on two integers
int question1(int a, int b) {
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    
    if(b != 0) {
        cout << "Division: " << static_cast<double>(a) / b << endl;
        cout << "Modulus: " << a % b << endl;
    } else {
        cout << "Division: Undefined (division by zero)" << endl;
        cout << "Modulus: Undefined (division by zero)" << endl;
    }
    
    return 0;
}

// Class for Question 2: Complex number operations
class Complex {
public:
    int real, imag;

    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Overloading + operator
    Complex operator + (const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    // Overloading - operator
    Complex operator - (const Complex& obj) {
        return Complex(real - obj.real, imag - obj.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int question2() {
    int real1, imag1, real2, imag2;

    cout << "Enter real part of first complex number: ";
    cin >> real1;
    cout << "Enter imaginary part of first complex number: ";
    cin >> imag1;

    cout << "Enter real part of second complex number: ";
    cin >> real2;
    cout << "Enter imaginary part of second complex number: ";
    cin >> imag2;

    Complex num1(real1, imag1);
    Complex num2(real2, imag2);

    Complex sum = num1 + num2;
    Complex difference = num1 - num2;

    cout << "Complex Number 1: "; num1.display();
    cout << "Complex Number 2: "; num2.display();
    cout << "Sum: "; sum.display();
    cout << "Difference: "; difference.display();

    return 0;
}

int main() {
    int n;
    cout << "Enter Question number (1-2): ";
    cin >> n;

    if(n == 1) {
        int a, b;
        cout << "Enter first integer: ";
        cin >> a;
        cout << "Enter second integer: ";
        cin >> b;
        question1(a, b);
    } else if(n == 2) {
        question2();
    } else {
        cout << "Invalid Question number" << endl;
    }

    return 0;
}