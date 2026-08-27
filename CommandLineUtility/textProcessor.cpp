#include <iostream>
#include <string>
#include "utility.h"

using namespace std;

const int ALPHABET_SIZE = 26;

void encrypt();
void decrypt();

void textEncryptDecrypt() {
    cout << "\n===== TEXT ENCRYPT/DECRYPT =====\n" << endl;
    cout << "1. Encrypt" << endl;
    cout << "2. Decrypt" << endl;
    cout << "3. Exit" << endl;
    cout << "Choose Option: ";

    int option = 0;
    cin >> option;

    if(!cin.fail()) {
        switch (option)
        {
        case 1:
            encrypt();
            break;
        case 2: 
            decrypt();
            break;
        default:
            cout << "Invalid Option" << endl;
            break;
        }
    }
}
void encrypt() {
    cout << "Enter String: " << endl;

    string txt;
    cin.ignore();
    getline(cin, txt);

    cout << "Enter Left Shift: " << endl;
    int lShift = 0;
    cin >> lShift;

    string encrypted;

    if(lShift > 0) {
        for (char c : txt) {
            if (c >= 'A' && c <= 'Z') {
                c = 'A' + (c - 'A' + lShift) % ALPHABET_SIZE;
            }
            else if (c >= 'a' && c <= 'z') {
                c = 'a' + (c - 'a' + lShift) % ALPHABET_SIZE;
            }

            encrypted += c;
        }

        cout << "Encrypted: " << encrypted << endl;
    }
    else {
        cout << "Shift must be greater than 0." << endl;
    }
}
void decrypt() {
    cout << "Enter String: " << endl;

    string txt;
    cin.ignore();
    getline(cin, txt);

    cout << "Enter Left Shift: " << endl;

    int lShift = 0;
    cin >> lShift;

    string decrypted;

    if (lShift > 0) {

        for (char c : txt) {

            if (c >= 'A' && c <= 'Z') {
                c = 'A' + (c - 'A' - lShift + ALPHABET_SIZE) % ALPHABET_SIZE;
            }
            else if (c >= 'a' && c <= 'z') {
                c = 'a' + (c - 'a' - lShift + ALPHABET_SIZE) % ALPHABET_SIZE;
            }

            decrypted += c;
        }

        cout << "Decrypted: " << decrypted << endl;
    }
    else {
        cout << "Shift must be greater than 0." << endl;
    }
}