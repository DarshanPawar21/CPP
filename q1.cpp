#include <iostream>
using namespace std;
// wap to  swap values of variable using third variable/withount using using third variable.
// // using third variable:
// int main()
// {
//     int num1, num2, temp;
//     cout << "Enter the num1 value :";
//     cin >> num1;
//     cout << "Enter the num2 value :";
//     cin >> num2;
//     cout << "Before saping :" << endl;
//     cout << "Number 1 is : " << num1 << endl;
//     cout << "Numer 2 is : " << num2 << endl;

//     cout << "After swaping :" << endl;
//     temp = num1;
//     num1 = num2;
//     num2 = temp;
//     cout << "Number 1 is : " << num1 << endl;
//     cout << "Numer 2 is : " << num2 << endl;
//     return 0;
// };

int main()
{
    int num1, num2;
    cout << "Enter the num1 value :";
    cin >> num1;
    cout << "Enter the num2 value :";
    cin >> num2;

    cout << "Before saping :" << endl;
    cout << "Number 1 is : " << num1 << endl;
    cout << "Numer 2 is : " << num2 << endl;

    cout << "After swaping :" << endl;
    num1 = num1 + num2;  // num1 = 1 , num2 = 2, sum = 3
    num2 = num1 - num2; // num2 = 2 : num1 = 3 - num2 = 2 == 1
    num1 = num1 - num2;

    cout << "Number 1 is : " << num1 << endl;
    cout << "Numer 2 is : " << num2 << endl;
}
