#include <iostream>
using namespace std;

class Time {
public:
    int seconds, hh, mm, ss;

    void readTime() {
        cout << "Enter seconds: ";
        cin >> seconds;
    }

    void convertTime() {
        hh = seconds / 3600;
        int remaining_seconds = seconds % 3600;
        
        mm = remaining_seconds / 60;
        ss = remaining_seconds % 60;
    }

    void display() {
        cout << hh << ":" << mm << ":" << ss << endl;
    }
};

int main() {
    Time t1;
    t1.readTime();
    t1.convertTime();
    
    cout << "\nOutput:\n";
    t1.display();
    
    return 0;
}