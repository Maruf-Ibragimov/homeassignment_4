#include <iostream>

using namespace std;

float convertoTometers(float km) {
    return km * 1000;
}

int main() {
    float km;
    cout << "Please enter a number in kilometers: " << endl;
    cin >> km;

    float meters = convertoTometers(km);
    
    cout << meters;

    return 0;
}