#include <iostream>

using namespace std;

int main() {
    const int size = 5;
    double arr[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++) {
        arr[i] /= 2.0;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
