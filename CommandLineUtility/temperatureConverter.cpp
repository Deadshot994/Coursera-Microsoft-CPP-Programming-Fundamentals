#include <iostream>
#include <iomanip>
#include "utility.h"

using namespace std;

const double MIN_TEMP = -273.15;
const double MAX_TEMP = 1000.0;

bool isValidTemp(double temp);
double convertCelsiusToFahrenheit(double celsius);
void displayResult(double celsius, double fahrenheit);

void temperatureConverter() {

    cout << "\n===== TEMPERATURE CONVERTER =====\n" << endl;
    cout << "This utility converts temperatures between Celsius and Fahrenheit.\n" << endl;
    cout << "Enter Temperature in Celsius: " << endl;
    double celsius = 0;
    cin >> celsius;

    if(!cin.fail() && isValidTemp(celsius)) {
        double fahrenheit = convertCelsiusToFahrenheit(celsius);
        displayResult(celsius, fahrenheit);
    }
}
bool isValidTemp(double temp) {
    return (temp >= MIN_TEMP && temp <= MAX_TEMP);
}
double convertCelsiusToFahrenheit(double celsius) {
    return (celsius * 9.0/5.0) + 32.0;
}
void displayResult(double celsius, double fahrenheit) {
    cout << fixed << std::setprecision(2);
    cout << celsius << "C = " << fahrenheit << "F" << endl;
}