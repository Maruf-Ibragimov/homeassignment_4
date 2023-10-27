#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int number);
void primeNumbers(int start, int end); 

int main() {
    int start, end;

    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;

    if (start < 2) {
        start = 2;
    }

    primeNumbers(start, end);

    return 0;
}


bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    if (number <= 3) {
        return true;
    }
    if (number % 2 == 0 || number % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

void primeNumbers(int start, int end) {
    cout << "Prime numbers between " << start << " and " << end << " are: ";
    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            cout << num << " ";
        }
    }
    cout << endl;
}