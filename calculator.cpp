#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    cout << "Enter first numbers: ";
    cin >> num1;
    cout << "Enter seconed numbers: ";
    cin >> num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    switch(op) {
        case '+':
            cout <<" Your Answer : " << num1 + num2;
            break;
        case '-':
            cout << " Your Answer : " << num1 - num2;
            break;
        case '*':
            cout <<" Your Answer : " << num1 * num2;
            break;
        case '/':
            cout <<" Your Answer : " << num1 / num2;
            break;
        default:
            cout << "Invalid operator";
    }
    return 0;
}