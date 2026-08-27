#include <iostream>
#include <string>
using namespace std;

class Customer {
private:
    int cust_id;
    string cust_name;
    int cust_age;
    string cust_city;
    string cust_mobile_number; 
    int cust_simcard_validity;
    string cust_telecom_brand_name;
public:
    void setData() {
        cout << "Enter Customer ID: ";
        cin >> cust_id;
        
        cout << "Enter Name (no spaces): ";
        cin >> cust_name;
        
        cout << "Enter Age: ";
        cin >> cust_age;
        
        cout << "Enter City: ";
        cin >> cust_city;
        
        cout << "Enter Mobile Number: ";
        cin >> cust_mobile_number;
        
        cout << "Enter SIM Validity (in years): ";
        cin >> cust_simcard_validity;
        
        cout << "Enter Telecom Brand (Jio, Airtel, Vi, etc.): ";
        cin >> cust_telecom_brand_name;
    }

    void displayData() {
        cout << cust_id << "\t" 
             << cust_name << "\t" 
             << cust_age << "\t" 
             << cust_city << "\t" 
             << cust_mobile_number << "\t" 
             << cust_simcard_validity << " yrs\t\t" 
             << cust_telecom_brand_name << endl;
    }
};

int main() {
    // Array of 5 Customer objects
    Customer customers[5];

    cout << "--- Enter Details for 5 Customers ---" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "\nCustomer " << i + 1 << ":" << endl;
        customers[i].setData();
    }
    cout << "ID\tName\tAge\tCity\tMobile No.\tSIM Validity\tBrand" << endl;
    
    
    for (int i = 0; i < 5; i++) {
        customers[i].displayData();
    }

    return 0;
}