#include <iostream>
const int MAX_ATTEMPTS = 5;

using namespace std;

void startLevel() {
    int attemptsLeft = MAX_ATTEMPTS;

    cout<<"You have: "<<attemptsLeft<<"attempts left"<<endl;
}
int main() {
    startLevel();
    return 0;
}