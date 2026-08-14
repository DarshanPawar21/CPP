#include <iostream>
using namespace std;


// Even Number :
int main()
{
    int num, i = 1;
    cin >> num;

    // While Loop
    while (i <= num)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
        i++;
    }

    // Do While Loop
    do
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
        i++;
    } while (i <= num);

    // For Loop
    for (i; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
};

// odd Number:

int main()
{
    int num, i = 1;
    cin >> num;

    // While Loop
    while (i <= num)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
        i++;
    }

    // Do While Loop
    do
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
        i++;
    } while (i <= num);

    // For Loop
    for (i; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
    }
};