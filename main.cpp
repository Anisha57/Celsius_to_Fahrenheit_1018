#include <iostream>
#include "temperature.h"
using namespace std;

int main() {
    double celsius;
    char again;

    do {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;

        double fahrenheit = get_fahrenheit(celsius);
        cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

        cout << "Do you want to convert another temperature? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "Program ended." << endl;
    return 0;
}
