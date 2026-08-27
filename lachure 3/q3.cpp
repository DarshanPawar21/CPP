#include <iostream>
using namespace std;

class TimeFormat {
public:
    int hh, mm, ss;

    void readTime() {
        cout << "Enter hours: ";
        cin >> hh;
        cout << "Enter minutes: ";
        cin >> mm;
        cout << "Enter seconds: ";
        cin >> ss;
    }

    void formatTime() {
        // Format seconds
        if (ss >= 60) {
            mm = mm + (ss / 60);
            ss = ss % 60;
        }
        
        // Format minutes
        if (mm >= 60) {
            hh = hh + (mm / 60);
            mm = mm % 60;
        }
    }

    void display() {
        cout << hh << ":" << mm << ":" << ss << endl;
    }
};

int main() {
    TimeFormat t1;
    t1.readTime();
    
    t1.formatTime();
    
    cout << "\nOutput:\n";
    t1.display();
    
    return 0;
}