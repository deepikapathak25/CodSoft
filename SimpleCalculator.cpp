#include <iostream>
using namespace std;

// Function to perform addition
double add(double a, double b) {
    return a + b;
}

// Function to perform subtraction
double subtract(double a, double b) {
    return a - b;
}

// Function to perform multiplication
double multiply(double a, double b) {
    return a * b;
}

// Function to perform division
double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
    return a / b;
}

int main() {
    char operatorChar;
    double num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operatorChar;

    cout << "Enter second number: ";
    cin >> num2;

    double result;
    switch (operatorChar) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            cout << "Invalid operator entered." << endl;
            return 1; // Return 1 to indicate an error
    }

    cout << "Result: " << result << endl;

    return 0;
}
