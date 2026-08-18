#include <iostream>
using namespace std;

class ArraySum {
public:
    int sum1D(int arr[], int size) {
        int total = 0;
        for (int i = 0; i < size; i++) total += arr[i];
        return total;
    }

    int sum2D(int arr[2][2], int rows, int cols) {
        int total = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                total += arr[i][j];
            }
        }
        return total;
    }
};

int main() {
    ArraySum as;
    int a1[] = {1, 2, 3, 4, 5};
    int a2[2][2] = {{1, 2}, {3, 4}};

    cout << "1D Array Sum: " << as.sum1D(a1, 5) << endl;
    cout << "2D Array Sum: " << as.sum2D(a2, 2, 2) << endl;
    return 0;
}