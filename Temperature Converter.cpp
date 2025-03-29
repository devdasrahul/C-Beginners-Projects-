#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    double temperature;
    char choice;
    cout << "Enter temperature: ";
    cin >> temperature;
    cout << "Convert to Fahrenheit (F) or Celsius (C)? ";
    cin >> choice;
    switch(choice) {
        case 'F':
        case 'f':
            cout << temperature << " Celsius is " << celsiusToFahrenheit(temperature) << " Fahrenheit.\n";
            break;
        case 'C':
        case 'c':
            cout << temperature << " Fahrenheit is " << fahrenheitToCelsius(temperature) << " Celsius.\n";
            break;
        default:
            cout << "Invalid choice.\n";
    }
    return 0;
}