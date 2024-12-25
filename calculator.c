#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

// Function prototypes
double add(double, double);
double subtract(double, double);
double multiply(double, double);
double divide(double, double);
double square(double);
double squareRoot(double);
double power(double, double);
long long factorial(int);
double sine(double);
double cosine(double);
double tangent(double);
double logarithm(double);
double exponent(double);

int main() {
    int choice;
    double num1, num2;

    do {
        system("CLS"); // Clear the console screen
        cout << "================== Calculator ==================\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Square\n";
        cout << "6. Square Root\n";
        cout << "7. Power\n";
        cout << "8. Factorial\n";
        cout << "9. Sine\n";
        cout << "10. Cosine\n";
        cout << "11. Tangent\n";
        cout << "12. Logarithm\n";
        cout << "13. Exponent\n";
        cout << "14. Quit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << divide(num1, num2) << endl;
                break;
            case 5:
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Result: " << square(num1) << endl;
                break;
            case 6:
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Result: " << squareRoot(num1) << endl;
                break;
            case 7:
                cout << "Enter the base and exponent: ";
                cin >> num1 >> num2;
                cout << "Result: " << power(num1, num2) << endl;
                break;
            case 8:
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Result: " << factorial(static_cast<int>(num1)) << endl;
                break;
            case 9:
                cout << "Enter an angle in radians: ";
                cin >> num1;
                cout << "Result: " << sine(num1) << endl;
                break;
            case 10:
                cout << "Enter an angle in radians: ";
                cin >> num1;
                cout << "Result: " << cosine(num1) << endl;
                break;
            case 11:
                cout << "Enter an angle in radians: ";
                cin >> num1;
                cout << "Result: " << tangent(num1) << endl;
                break;
            case 12:
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Result: " << logarithm(num1) << endl;
                break;
            case 13:
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Result: " << exponent(num1) << endl;
                break;
            case 14:
                cout << "Quitting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
        if (choice != 14) {
            cout << "Press any key to continue...";
            cin.ignore();
            cin.get();
        }
    } while (choice != 14);

    return 0;
}

// Function definitions
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}

double square(double a) {
    return a * a;
}

double squareRoot(double a) {
    if (a < 0) {
        cout << "Error: Negative number!" << endl;
        return 0;
    }
    return sqrt(a);
}

double power(double base, double exponent) {
    return pow(base, exponent);
}

long long factorial(int n) {
    if (n < 0) {
        cout << "Error: Negative number!" << endl;
        return 0;
    }
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

double sine(double angle) {
    return sin(angle);
}

double cosine(double angle) {
    return cos(angle);
}

double tangent(double angle) {
    return tan(angle);
}

double logarithm(double value) {
    if (value <= 0) {
        cout << "Error: Non-positive number!" << endl;
        return 0;
    }
    return log(value);
}

double exponent(double value) {
    return exp(value);
} 
