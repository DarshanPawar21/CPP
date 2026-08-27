#include <iostream>
using namespace std;

class Car {
public:
    int car_id;
    string car_company_name;
    string car_color;
    string car_model;
    int car_release_year;

    void setData() {
        cout << "Enter Car ID: ";
        cin >> car_id;
        cout << "Enter Company Name: ";
        cin >> car_company_name;
        cout << "Enter Color: ";
        cin >> car_color;
        cout << "Enter Model: ";
        cin >> car_model;
        cout << "Enter Release Year: ";
        cin >> car_release_year;
    }

    void displayData() {
        cout << car_id << "\t" << car_company_name << "\t\t" 
             << car_color << "\t" << car_model << "\t" << car_release_year << endl;
    }
};

int main() {
    Car cars[4]; // Array of 4 car objects

    cout << "--- Enter Details for 4 Cars ---" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "\nCar " << i + 1 << ":" << endl;
        cars[i].setData();
    }

    cout << "\n------------------------- Car Records -------------------------" << endl;
    cout << "ID\tCompany\t\tColor\tModel\tYear" << endl;
    cout << "---------------------------------------------------------------" << endl;
    
    for (int i = 0; i < 4; i++) {
        cars[i].displayData();
    }

    return 0;
}