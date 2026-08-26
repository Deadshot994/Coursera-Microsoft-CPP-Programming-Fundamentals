#include <iostream>

using namespace std;

int factorialCalc(int n);

int main() {
    int n = 0;

    cout<<"Number: "<<endl;
    cin>>n;
    int result = factorialCalc(n);
    cout<<"Factorial: "<<result<<endl;

    return 0;
}
int factorialCalc(int n) {

    if (n<0) {
        cout<<"ERROR: NEGATIVE"<<endl;
    }
    int res = 1;
    int ctr = 1;

    while(ctr <= n) {
        res = res * ctr;
        ctr = ctr + 1;
    }
    return res;
}