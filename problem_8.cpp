#include <iostream>

using namespace std;

int main() {
    const int size = 6;
    double arr[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    for (int i = 1; i < size; i += 2) {
        arr[i] = arr[i] * arr[i] * arr[i];
    }

    cout << "Array after cubing every second element: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
