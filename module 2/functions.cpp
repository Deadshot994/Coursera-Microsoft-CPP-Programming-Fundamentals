#include <iostream>
#include <iomanip>
using namespace std;

const double MIN_TEMP = -273.15;
const double MAX_TEMP = 1000.0;

bool isValidTemp(double temp);
double convertCelsiusToFahrenheit(double celsius);
void displayResult(double celsius, double fahrenheit);

int main() {
    double celsius;
    cout<<"Enter temp in celsius: "<<endl;
    cin>>celsius;

    if(isValidTemp(celsius)) {
        double fahrenheit = convertCelsiusToFahrenheit(celsius);
        displayResult(celsius, fahrenheit);
    }
    else {
        cout<<"Invalid temp"<<endl;
    }
}

bool isValidTemp(double temp) {
    return (temp>=MIN_TEMP && temp<=MAX_TEMP);
}

double convertCelsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

void displayResult(double celsius, double fahrenheit) {
    cout<<fixed<<std::setprecision(2);
    cout << celsius << "C = " << fahrenheit << "F" << endl;
}