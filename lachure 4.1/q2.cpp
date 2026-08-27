#include <iostream>
using namespace std;


class P {
protected:
    float temperature;

public:
    void setTemperature() {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
    }
};

class Q : public P {
protected:
    float fahrenheit;

public:
    void toFehrenheit() {
        fahrenheit = (temperature * 9.0 / 5.0) + 32.0;
        cout << "Temperature in Fahrenheit: " << fahrenheit << " F" << endl;
    }
};

// Derived Class R inheriting from Q
class R : public Q {
protected:
    float kelvin;

public:
    void toKelvin() {
        kelvin = (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
        cout << "Temperature in Kelvin: " << kelvin << " K" << endl;
    }
};

int main() {
    R tempObj;
    
    tempObj.setTemperature(); 
    
    tempObj.toFehrenheit();     
    tempObj.toKelvin();         

    return 0;
}