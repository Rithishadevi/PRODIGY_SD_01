#include <iostream>
using namespace std;

int main() {
    double temp, celsius, fahrenheit, kelvin;
    char unit;

    cout << "Enter temperature value: ";
    cin >> temp;

    cout << "Enter unit (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> unit;

    switch (unit) {
        case 'C':
        case 'c':
            celsius = temp;
            fahrenheit = (celsius * 9.0 / 5.0) + 32;
            kelvin = celsius + 273.15;

            cout << "\nTemperature in Fahrenheit: " << fahrenheit << " F";
            cout << "\nTemperature in Kelvin: " << kelvin << " K" << endl;
            break;

        case 'F':
        case 'f':
            fahrenheit = temp;
            celsius = (fahrenheit - 32) * 5.0 / 9.0;
            kelvin = celsius + 273.15;

            cout << "\nTemperature in Celsius: " << celsius << " C";
            cout << "\nTemperature in Kelvin: " << kelvin << " K" << endl;
            break;

        case 'K':
        case 'k':
            kelvin = temp;
            celsius = kelvin - 273.15;
            fahrenheit = (celsius * 9.0 / 5.0) + 32;

            cout << "\nTemperature in Celsius: " << celsius << " C";
            cout << "\nTemperature in Fahrenheit: " << fahrenheit << " F" << endl;
            break;

        default:
            cout << "\nInvalid unit entered!" << endl;
    }

    return 0;
}
