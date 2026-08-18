#include <iostream>
#include <cmath>
using namespace std;

class NumberAnalyzer {
private:
    int num;
public:
    NumberAnalyzer(int n) : num(n) {}

    int sumFirstAndLastDigit() {
        int temp = num, last = temp % 10;
        while (temp >= 10) temp /= 10;
        return temp + last;
    }

    int sumAllDigits() {
        int temp = num, sum = 0;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        return sum;
    }

    bool isPalindrome() {
        int temp = num, rev = 0;
        while (temp > 0) {
            rev = rev * 10 + (temp % 10);
            temp /= 10;
        }
        return rev == num;
    }

    bool isArmstrong() {
        int temp = num, sum = 0, digits = 0;
        for (int t = num; t > 0; t /= 10) digits++;
        temp = num;
        while (temp > 0) {
            int d = temp % 10;
            sum += pow(d, digits);
            temp /= 10;
        }
        return sum == num;
    }

    bool isMagicNumber() {
        int temp = num;
        while (temp > 9) {
            int sum = 0;
            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
            temp = sum;
        }
        return temp == 1;
    }
};

int main() {
    NumberAnalyzer na(151);
    cout << "First + Last Digit Sum: " << na.sumFirstAndLastDigit() << endl;
    cout << "Sum of Digits: " << na.sumAllDigits() << endl;
    cout << "Is Palindrome? " << (na.isPalindrome() ? "Yes" : "No") << endl;
    cout << "Is Armstrong? " << (na.isArmstrong() ? "Yes" : "No") << endl;
    cout << "Is Magic Number? " << (na.isMagicNumber() ? "Yes" : "No") << endl;
    return 0;
}