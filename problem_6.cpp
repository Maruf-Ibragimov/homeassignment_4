#include <iostream>

using namespace std;

int main() {
    const int size = 5;
    int arr[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int product = 1;
    for (int i = 0; i < size; i++) {
        product *= arr[i];
    }

    cout << product << endl;

    return 0;
}
