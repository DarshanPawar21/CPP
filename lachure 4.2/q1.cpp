#include <iostream>
using namespace std;

// Base Class
class RBI {
protected:
    float rate;

public:
    void getROI() {
        cout << "Rate of Interest: " << rate << "%" << endl;
    }
};

// Child Class 1
class SBI : public RBI {
public:
    SBI() {
        rate = 6.5; // SBI specific rate
    }
};

// Child Class 2
class BOB : public RBI {
public:
    BOB() {
        rate = 7.2; // BOB specific rate
    }
};

// Child Class 3
class ICICI : public RBI {
public:
    ICICI() {
        rate = 7.8; // ICICI specific rate
    }
};

int main() {
    SBI sbi_bank;
    BOB bob_bank;
    ICICI icici_bank;

    cout << "--- Bank Interest Rates ---" << endl;
    
    cout << "SBI ";
    sbi_bank.getROI();
    
    cout << "BOB ";
    bob_bank.getROI();
    
    cout << "ICICI ";
    icici_bank.getROI();

    return 0;
}