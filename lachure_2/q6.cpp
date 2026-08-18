#include <iostream>
using namespace std;

class TimeConverter {
private:
    int totalSeconds;
public:
    TimeConverter(int sec) : totalSeconds(sec) {}

    void displayFormattedTime() {
        int hours = totalSeconds / 3600;
        int minutes = (totalSeconds % 3600) / 60;
        int seconds = totalSeconds % 60;

        cout << hours << "h:" << minutes << "m:" << seconds << "s" << endl;
    }
};

int main() {
    TimeConverter tc(3665);
    cout << "Formatted Time: ";
    tc.displayFormattedTime();
    return 0;
}