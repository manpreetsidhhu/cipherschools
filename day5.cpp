#include <iostream>
#include <string>
using namespace std;

int question1(int n) {
    if (n % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;
    return 0;
}

int question2(string s) {
    string reversed = string(s.rbegin(), s.rend());
    cout << "Reversed string: " << reversed << endl;
    return 0;
}

int question3(string s) {
    int vowels = 0, consonants = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            vowels++;
        else
            consonants++;
    }
    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
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
        string s;
        cout << "Enter a string: ";
        cin >> s;
        question2(s);
    } else if(n == 3) {
        string s;
        cout << "Enter a string: ";
        cin >> s;
        question3(s);
    } else {
        cout << "Invalid Question number" << endl;
    }

    return 0;
}