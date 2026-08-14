#include <iostream>
using namespace std;
// wap to check user is eligible for vote or not.
int main()
{
    int age;
    cout << "Enter your age :";
    cin >> age;
    if (age >= 18)
    {
        cout << "Are you eligible for vote !" << endl;
    }
    else
    {
        cout << "Are you not eligible for vote !" << endl;
    }
};



//
