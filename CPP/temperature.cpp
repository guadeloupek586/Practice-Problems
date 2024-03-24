/*
    *   Name:  temperature.cpp
    *
    *   Complete the function that converts a temperature. 
    *   If the second parameter is true, convert the temperature from Fahrenheit to Celsius.
    *   If the second parameter is false, convert the temperature from Celsius to Fahrenheit.
*/
#include <iostream>
#include <string>


using namespace std;

double ConvertTemperature(double temperature, bool isFahrenheit)
{   // celsius = (fahrenheit - 32) * 5/9
    // fahrenheit = (celsius * 9/5) + 32
    // Write your code here

    return 0.0; // replace 0.0 with the converted temperature
}

int main() {
    cout << "32°F is " << ConvertTemperature(32, true) << "°C" << endl; // 0°C
    cout << "100°C is " << ConvertTemperature(100, false) << "°F" << endl; // 212°F
    cout << "98.6°F is " << ConvertTemperature(98.6, true) << "°C" << endl; // 37°C
    return 0;
}