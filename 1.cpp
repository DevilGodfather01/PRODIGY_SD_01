#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double temperature;
    char unit;
    
    cout << "Enter the temperature value: ";
    cin >> temperature;
    
    cout << "Enter the unit of the temperature (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> unit;
    
    cout << fixed << setprecision(2);
    if (unit == 'C' || unit == 'c') {
        double fahrenheit = (temperature * 9/5) + 32;
        double kelvin = temperature + 273.15;
        cout << "Temperature in Fahrenheit: " << fahrenheit << " F" << endl;
        cout << "Temperature in Kelvin: " << kelvin << " K" << endl;
    } else if (unit == 'F' || unit == 'f') {
        double celsius = (temperature - 32) * 5/9;
        double kelvin = (temperature - 32) * 5/9 + 273.15;
        cout << "Temperature in Celsius: " << celsius << " C" << endl;
        cout << "Temperature in Kelvin: " << kelvin << " K" << endl;
    } else if (unit == 'K' || unit == 'k') {
        double celsius = temperature - 273.15;
        double fahrenheit = (temperature - 273.15) * 9/5 + 32;
        cout << "Temperature in Celsius: " << celsius << " C" << endl;
        cout << "Temperature in Fahrenheit: " << fahrenheit << " F" << endl;
    } else {
        cout << "Invalid unit entered. Please enter C for Celsius, F for Fahrenheit, or K for Kelvin." << endl;
    }
    
    return 0;
}