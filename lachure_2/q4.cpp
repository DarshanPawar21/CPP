#include <iostream>
using namespace std;

class SumCalculator {
private:
    int n;
public:
    SumCalculator(int num) : n(num) {}

    int sumFor() {
        int sum = 0;
        for (int i = 1; i <= n; i++) sum += i;
        return sum;
    }

    int sumWhile() {
        int sum = 0, i = 1;
        while (i <= n) { sum += i; i++; }
        return sum;
    }

    int sumDoWhile() {
        int sum = 0, i = 1;
        do { sum += i; i++; } while (i <= n);
        return sum;
    }
};

int main() {
    SumCalculator sc(10);
    cout << "Sum using for loop: " << sc.sumFor() << endl;
    cout << "Sum using while loop: " << sc.sumWhile() << endl;
    cout << "Sum using do-while loop: " << sc.sumDoWhile() << endl;
    return 0;
}