#include <iostream>

using namespace std;

char convertToChar(int decimalNumber);

int main() {
    int decimalNumber;

    cout << "Enter a decimal number (between 32 and 126): ";
    cin >> decimalNumber;

    char result = convertToChar(decimalNumber);

    if (result == 'Wrong') {
        cout << "Invalid input. The decimal number is not in the range 32 to 126." << endl;
    } else {
        cout << "The character corresponding to " << decimalNumber << " is: " << result << endl;
    }

    return 0;
}

char convertToChar(int decimalNumber) {
    if (decimalNumber >= 32 && decimalNumber <= 126) {
        return static_cast<char>(decimalNumber);
    } else {
        return 'Wrong';
    }
}