#include <iostream>
#include <iomanip> // Required for formatting
using namespace std;

int main() {
    int total_seconds, hours, minutes, seconds;

    cout << "Enter total seconds: ";
    cin >> total_seconds;

    // Calculate hours, minutes, and remaining seconds
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    // Display in HH:MM:SS format with leading zeros
    cout << "Time in HH:MM:SS format -> ";
    cout << setfill('0') << setw(2) << hours << ":" 
         << setfill('0') << setw(2) << minutes << ":" 
         << setfill('0') << setw(2) << seconds << endl;

    return 0;
}