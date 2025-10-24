#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Addition = " << a + b << endl;
    cout << "Subtraction = " << a - b << endl;
    cout << "Multiplication = " << a * b << endl;

    if (b != 0) {
        cout << "Division = " << (float)a / b << endl;
        cout << "Modulus = " << a % b << endl;
    } else {
        cout << "Division and Modulus by zero are not allowed!" << endl;
    }

    return 0;
}
