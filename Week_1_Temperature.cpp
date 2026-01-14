

#include <iostream>
using namespace std;

int main() {
    double celsius;
    const double NINE = 9.0;
    const double FIVE = 5.0;
    const double THIRTY_TWO = 32.0;

    cout << "Celsius: ";
    cin >> celsius;

    double fahrenheit = (celsius * NINE / FIVE) + THIRTY_TWO;

    cout << "Fahrenheit: " << fahrenheit << endl;

    return 0;
} 
