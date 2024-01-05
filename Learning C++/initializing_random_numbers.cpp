#include <iostream>
#include <ctime>
using namespace std;

int main() {
    short int minValue = 1;
    short int maxValue = 6;
    srand(time(0));
    int dice_num = (rand() % (maxValue - minValue + 1) + minValue); // or 7. This is the general formula for generating random numbers between a and b
    cout << dice_num;
}