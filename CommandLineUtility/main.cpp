#include <iostream>
#include "utility.h"

using namespace std;

int main() {

    bool running = true;

    while(running) {
        displayMenu();

        int choice = 0;
        cin >> choice;

        switch(choice) {
            case 1: temperatureConverter();
            break;

            case 2: textEncryptDecrypt();
            break;

            case 3: baseConverter();
            break;

            case 4: fileInfo();
            break;

            case 5: 
                running = false;
                break;
            
            default:
                cout << "Invalid Option" << endl;
                break;
        }
    }

    return 0;
}