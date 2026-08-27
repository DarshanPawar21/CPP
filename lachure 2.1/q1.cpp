#include <iostream>
using namespace std;

class Employee {
public:
    int emp_id;
    string emp_name;
    int emp_age;
    string emp_role;
    double emp_salary;
    string emp_city;
    int emp_experience;
    string emp_company_name;

    void setData() {
        cout << "Enter Employee ID: ";
        cin >> emp_id;
        cout << "Enter Name (no spaces): ";
        cin >> emp_name;
        cout << "Enter Age: ";
        cin >> emp_age;
        cout << "Enter Role (no spaces): ";
        cin >> emp_role;
        cout << "Enter Salary: ";
        cin >> emp_salary;
        cout << "Enter City: ";
        cin >> emp_city;
        cout << "Enter Experience (in years): ";
        cin >> emp_experience;
        cout << "Enter Company Name (no spaces): ";
        cin >> emp_company_name;
    }

    void displayData() {
        cout << emp_id << "\t" << emp_name << "\t" << emp_age << "\t" 
             << emp_role << "\t" << emp_salary << "\t" << emp_city << "\t" 
             << emp_experience << "\t" << emp_company_name << endl;
    }
};

int main() {
    Employee emp[5]; // Array of 5 employee objects

    cout << "--- Enter Details for 5 Employees ---" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "\nEmployee " << i + 1 << ":" << endl;
        emp[i].setData();
    }

    cout << "\n------------------------------- Employee Records -------------------------------" << endl;
    cout << "ID\tName\tAge\tRole\tSalary\tCity\tExp.\tCompany" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    
    for (int i = 0; i < 5; i++) {
        emp[i].displayData();
    }

    return 0;
}