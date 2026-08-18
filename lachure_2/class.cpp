#include <iostream>
using namespace std;

class ValueSwapper {
private:
    int a, b;
public:
    ValueSwapper(int x, int y) : a(x), b(y) {}

    void swapWithTemp() {
        int temp = a;
        a = b;
        b = temp;
        cout << "After swap with temp: a = " << a << ", b = " << b << endl;
    }

    void swapWithoutTemp() {
        a = a + b;
        b = a - b;
        a = a - b;
        cout << "After swap without temp: a = " << a << ", b = " << b << endl;
    }
};

int main() {
    ValueSwapper obj(10, 20);
    obj.swapWithTemp();
    obj.swapWithoutTemp();
    return 0;
}