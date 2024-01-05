// Write a program to take radius of the circle as the input and area of the circle as the output

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius; 
    cout << "Enter the radius in cm: ";
    cin >> radius;
    double area = 3.14*pow(radius, 2);
    cout << "Area = " << area;
}