#include <iostream>
using namespace std;

class X {
protected:
    int a, b, c;
};

class Y : public X {
public:
    void setData() {
        cout << "Enter three numbers (a, b, c): ";
        cin >> a >> b >> c;
    }

    void getData() {
        int sum_of_cubes = (a * a * a) + (b * b * b) + (c * c * c);
        
        cout << "Cube of a: " << (a * a * a) << endl;
        cout << "Cube of b: " << (b * b * b) << endl;
        cout << "Cube of c: " << (c * c * c) << endl;
        cout << "Sum of all cubes: " << sum_of_cubes << endl;
    }
};

int main() {
    Y obj;
    
    obj.setData();
    cout << "-----------------------" << endl;
    obj.getData();

    return 0;
}