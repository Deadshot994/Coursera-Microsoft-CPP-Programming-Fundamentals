#include <iostream>
#include <algorithm>
#include "utility.h"

using namespace std;

void decToBin();
void decToHex();

void baseConverter() {
    cout << "\n===== BASE CONVERTER =====\n" << endl;
    cout << "1. Decimal -> Binary" << endl;
    cout << "2. Decimal -> Hexadecimal" << endl;
    cout << "3. Exit" << endl;
    cout << "Choose Option: ";

    int option = 0;
    cin >> option;

    if(!cin.fail()) {
        switch (option)
        {
        case 1:
            decToBin();
            break;
        case 2: 
            decToHex();
            break;
        default:
            cout << "Invalid Option" << endl;
            break;
        }
    }
}
void decToBin() {
    cout << "Enter Decimal: " << endl;

    int decimal = 0;
    cin >> decimal;

    int remainder = 0;
    int result = 0;
    int place = 1;

    if (!cin.fail() && decimal >= 0) {

        if (decimal == 0) {
            cout << "Binary: 0" << endl;
            return;
        }

        while (decimal > 0) {
            remainder = decimal % 2;
            result = result + (remainder * place);

            decimal = decimal / 2;
            place = place * 10;
        }

        cout << "Binary: " << result << endl;
    }
    else {
        cout << "Invalid input." << endl;
    }
}

void decToHex() {
    cout << "Enter Decimal: " << endl;

    int decimal = 0;
    cin >> decimal;


    int remainder = 0;

    if (!cin.fail() && decimal >= 0) {

        string hex ="";
        if (decimal == 0) {
            hex = "0";
        }

        while(decimal > 0) {
            remainder = decimal % 16;

            if(remainder < 10) {
                hex += char('0' + remainder);
            }
            else {
                hex += char('A' + (remainder - 10)); 
            }

            decimal /= 16;
        }
        reverse(hex.begin(), hex.end());

        cout << "Hexadecimal: " << hex << endl;
    }
    else {
        cout << "Invalid input." << endl;
    }
}