#include <iostream>
using namespace std;

int main() {
    int a, b;
    char ch;

    while (true) {
        cout << "\nEnter first value (or 'o' to quit): ";
        if (!(cin >> a)) break;  // in case user types 'o' accidentally here

        cout << "Enter second value: ";
        cin >> b;

        cout << "Enter operation (+ - * /) or 'o' to quit: ";
        cin >> ch;

        switch (ch) {
            case '+':
                cout << "Result: " << a + b << endl;
                break;
            case '-':
                cout << "Result: " << a - b << endl;
                break;
            case '*':
                cout << "Result: " << a * b << endl;
                break;
            case '/':
                if (b == 0)
                    cout << "Error: Division by zero!" << endl;
                else
                    cout << "Result: " << static_cast<double>(a) / b << endl;
                break;
            case 'o':
                cout << "Exiting calculator. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid operation!\n";
        }
    }
    return 0;
}