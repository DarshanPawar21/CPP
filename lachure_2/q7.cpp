#include <iostream>
using namespace std;

class ElectricityBill {
private:
    int units;
public:
    ElectricityBill(int u) : units(u) {}

    double calculateBill() {
        double amount = 0;
        if (units <= 100) {
            amount = units * 5.0;
        } else if (units <= 200) {
            amount = (100 * 5.0) + ((units - 100) * 7.0);
        } else {
            amount = (100 * 5.0) + (100 * 7.0) + ((units - 200) * 10.0);
        }
        return amount;
    }
};

int main() {
    ElectricityBill eb(250);
    cout << "Total Electricity Bill: $" << eb.calculateBill() << endl;
    return 0;
}