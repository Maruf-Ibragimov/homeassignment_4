#include <iostream>
#include <iomanip>

using namespace std;

double divideWithPrecision(double numerator, double denominator) {
    if (denominator == 0.0) {
        cerr << "Error: Division by zero is not allowed." << endl;
        return 0.0;
    }
    return numerator / denominator;
}

int main() {
    double numerator, denominator;

    cout << "Enter the numerator: ";
    cin >> numerator;
    cout << "Enter the denominator: ";
    cin >> denominator;

    double result = divideWithPrecision(numerator, denominator);

    cout << "Result of division with precision 3: " << fixed << setprecision(3) << result << endl;

    return 0;
}
