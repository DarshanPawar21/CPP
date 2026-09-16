#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void displayDetails()
    {
        cout << "This is an Animal" << endl;
    }
};

class Dog : public Animal
{
public:
    void displayDetails()
    {
        cout << "Dog - Sound: Bark" << endl;
    }
};

class Cat : public Animal
{
public:
    void displayDetails()
    {
        cout << "Cat - Sound: Meow" << endl;
    }
};

int main()
{
    Dog d;
    Cat c;
    Animal *a[2];

    a[0] = &d;
    a[1] = &c;

    a[0]->displayDetails();
    a[1]->displayDetails();

    return 0;
}
