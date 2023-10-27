#include <iostream>
#include <cmath>

using namespace std;

bool Triangle(double a, double b, double c) {
    if (a != b && a != c && b != c) {
        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            return true;
        }
    }
    return false;
}

int main() {
    double a, b, c;

    cout << "Enter the length of side a: ";
    cin >> a;
    cout << "Enter the length of side b: ";
    cin >> b;
    cout << "Enter the length of side c: ";
    cin >> c;

    bool isIsoscelesRight = Triangle(a, b, c);

    if (isIsoscelesRight) {
        cout << "These side lengths can form an isosceles right triangle." << endl;
    } else {
        cout << "These side lengths cannot form an isosceles right triangle." << endl;
    }

    return 0;
}
