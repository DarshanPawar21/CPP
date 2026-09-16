#include <iostream>
#include<conio.h>
using namespace std;

class Animal
{
    string name;
    string sound;

public:
    void setdata(string n, string s)
    {
       this-> name = n;
       this-> sound = s;
    }

    string getsound()
    {
        return sound;
    }
};

class Dog : public Animal
{
public:
    void makeSound()
    {
        cout << "Dog Sound: " << getsound() << endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound()
    {
        cout << "Cat Sound: " << getsound() << endl;
    }
};

int main()
{
    Dog d;
    Cat c;

    d.setdata("Dog", "Bark");
    c.setdata("Cat", "Meow");
    d.makeSound();
    c.makeSound();

    return 0;
}
