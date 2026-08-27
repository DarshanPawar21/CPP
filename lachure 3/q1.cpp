#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inch;

    void readDistance() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inch: ";
        cin >> inch;
    }

    void addDistance(Distance d1, Distance d2) {
        feet = d1.feet + d2.feet;
        inch = d1.inch + d2.inch;

        // Convert extra inches into feet
        if (inch >= 12) {
            feet = feet + (inch / 12);
            inch = inch % 12;
        }
    }

    void display() {
        cout << feet << " feet " << inch << " inch" << endl;
    }
};

int main() {
    Distance d1, d2, sum;
    
    cout << "Input 1:" << endl;
    d1.readDistance();
    
    cout << "\nInput 2:" << endl;
    d2.readDistance();
    
    sum.addDistance(d1, d2);
    
    cout << "\nOutput:" << endl;
    sum.display();
    
    return 0;
}