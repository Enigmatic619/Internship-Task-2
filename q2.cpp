#include<iostream>
using namespace std;

double sum(int a, int b) {
    double s = a + b;
    return s;
}

double subb(int a, int b) {
    double s = a - b;
    return s;
}

double mull(int a, int b) {
    double s = a * b;
    return s;
}

double divv(int a, int b) {
    double s = a / b;
    return s;
}

int main() {
    double a, b;
    double result;
    int c;

    while (true) {
        cout << "                                       WECLOME TO THE CALCULATOR" << endl;

        cout << "Enter the operation you want to perform  :" << endl;
        cout << "Press 1 for addition " << endl;
        cout << "Press 2 for subtraction " << endl;
        cout << "Press 3 for multiplication " << endl;
        cout << "Press 4 for division " << endl;

        cin >> c;

        switch (c) {
        case 1:
            while (true) {
                cout << "Enter the first number" << endl;
                cin >> a;
                cout << "Enter the second number" << endl;
                cin >> b;
                result = sum(a, b);
                cout << "Result of summation is :" << result << endl;
                cout << "Press 1 to restart, 2 to exit" << endl;
                cin >> c;
                if (c == 1)
                    break;
                else if (c == 2)
                    return 0;
                else
                    cout << "Invalid input. Please enter again." << endl;
                return 0;
            }
            break;

        case 2:
            while (true) {
                cout << "Enter the first number" << endl;
                cin >> a;
                cout << "Enter the second number" << endl;
                cin >> b;
                result = subb(a, b);
                cout << "Result of subtraction is :" << result << endl;
                cout << "Press 1 to restart and and press any other key to exit" << endl;
                cin >> c;
                if (c == 1)
                    break;
              
                else
                    cout << "Goodbye!" << endl;
                return 0;
            }
            break;

        case 3:
            while (true) {
                cout << "Enter the first number" << endl;
                cin >> a;
                cout << "Enter the second number" << endl;
                cin >> b;
                result = mull(a, b);
                cout << "Result of multiplication is:" << result << endl;
                cout << "Press 1 to restart, any other key to exit" << endl;
                cin >> c;
                if (c == 1)
                    break;
             
                else
                    cout << "Goodbye!" << endl;
                return 0;

            }
            break;

        case 4:
            while (true) {
                cout << "Enter the dividend" << endl;
                cin >> a;
                cout << "Enter the divisor" << endl;
                cin >> b;
                if (b == 0) {
                    cout << "Division by zero is not allowed." << endl;
                    break;
                }
                result = divv(a, b);
                cout << "The result for division is:" << result << endl;
                cout << "Press 1 to restart, any other key to exit" << endl;
                cin >> c;
                if (c == 1)
                    break;
          
                else
                    cout << "Goodbye" << endl;
                return 0;
            }
            break;

        default:
            cout << "Invalid input. Please enter again." << endl;
            continue; // Restart the loop if input is invalid
        }
    }

    return 0;
}
