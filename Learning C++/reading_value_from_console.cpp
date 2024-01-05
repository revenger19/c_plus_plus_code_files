// Write a progarm that converts fahrenheit to celcius

#include <iostream>
using namespace std;

int main() {
    double F;
    cout << "Enter a value: ";
    cin >> F;
    cout << F << endl;
    double celsius = (F - 32)/(1.8);
    cout << "Celcius temperature = ";
    cout << celsius;
    return 0;
}