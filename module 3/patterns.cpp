#include <iostream>

using namespace std;

void generatePyramid(int height) {
    for(int i = 1; i<height; i++) {
        for (int j = 0; j<i; j++) {
            cout<<" * ";
        }
        cout<<endl;
    }
}

void generateDiamond(int height) {

    //Upper Half
    for (int i = 1; i <= height; i++) {

        for (int j = 1; j <= height - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    //Bottom Half
    for (int i = height - 1; i >= 1; i--) {
        for (int j = 1; j <= height - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int height = 0;
    int pattern = 0;

    cout << "Enter Height : ";
    cin >>  height;

    cout << "Choose pattern [1, 2]: ";
    cin >> pattern;

    switch (pattern)
    {
    case 1:
        generatePyramid(height);
        break;
    case 2:
        generateDiamond(height);
        break;
    default:
        break;
    }
    return 0;
}