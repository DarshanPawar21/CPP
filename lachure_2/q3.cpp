#include <iostream>
using namespace std;

class LoopPrinter {
private:
    int n;
public:
    LoopPrinter(int num) : n(num) {}

    void print1ToN() {
        cout << "1 to " << n << " (For Loop): ";
        for (int i = 1; i <= n; i++) cout << i << " ";
        cout << endl;
    }

    void printNTo1() {
        cout << n << " to 1 (While Loop): ";
        int i = n;
        while (i >= 1) {
            cout << i << " ";
            i--;
        }
        cout << endl;
    }

    void printEvenOdd() {
        cout << "Even numbers (Do..While Loop): ";
        int i = 1;
        do {
            if (i % 2 == 0) cout << i << " ";
            i++;
        } while (i <= n);
        cout << endl;
    }
};

int main() {
    LoopPrinter lp(10);
    lp.print1ToN();
    lp.printNTo1();
    lp.printEvenOdd();
    return 0;
}